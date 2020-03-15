#include <iostream>
#include "Rational.h"

Rational::Rational() {
	// @author: Stefan
	denominator = 0;
	count = 0;
}

Rational::Rational(int a, int b) {
	// @author: Stefan
	count = a;
	denominator = b;
}

Rational::Rational(const Rational&  r) {
	// @author: Stefan
	denominator = r.denominator;
	count = r.count;
}
Rational Rational::operator=(const Rational& r) {
	/*
	Copy attributs value from one rational number to the otherone
	Input:
		c - Rational
	Output:
		Rational

	@author: Stefan
	*/
	denominator = r.denominator;
	count = r.count;
	return *this;
}

int Rational::get_ctr() {
	// @author: Stefan
	return count;
}

int Rational::get_den() {
	// @author: Stefan
	return denominator;
}

void Rational::show_nr() {
	/*
	Prints the rational number in console
	@author: Stefan
	*/
	std::cout << count << " / " << denominator;
}

int cmmdc(int a, int b) {
	while (a!=b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}

void Rational::irreducible() {
	/*
	Turns Rational number into an irreducible fraction 
	( divides dominator and count with cmmdc(dominator, count) )
	@author Stefan
	*/
	int d = cmmdc(denominator, count);
	count = count / d;
	denominator = denominator / d;
}

Rational Rational::operator+(const Rational& r) {
	/*
	Adds 2 rational elements and returns the result
	Input:
		c - Rational
	Output:
		Rational

	@author: Stefan
	*/
	Rational rez;
	rez.count = count * r.denominator + r.count * denominator;
	rez.denominator = denominator * r.denominator;
	rez.irreducible();
	return rez;
}

Rational::~Rational() {
	//nimic
}