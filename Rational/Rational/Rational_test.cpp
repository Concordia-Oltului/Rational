#include "Rational.h"
#include <cassert>
#include <iostream>
#include <cmath>

using namespace std;


void test_constructor() {
	Rational a, b(2, 3), c(b);
	assert(b.get_ctr() == 2);
	assert(b.get_den() == 3);
	assert(c.get_ctr() == 2);
	assert(c.get_den() == 3);
	a = b;
	assert(a.get_ctr() == 2);
	assert(a.get_den() == 3);
}

void test_irreducible() {
	Rational a(2, 6);
	a.irreducible();
	assert(a.get_ctr() == 1);
	assert(a.get_den() == 3);
	Rational b(27, 36);
	b.irreducible();
	assert(b.get_ctr() == 3);
	assert(b.get_den() == 4);
}

void test_add() {
	Rational a(3, 4), b(5, 6), rez;
	rez = a + b;
	assert(rez.get_ctr() == 19);
	assert(rez.get_den() == 12);
}

void test_sub() {
	Rational a(3, 7), b(1, 3), rez;
	rez = a - b;
	assert(rez.get_ctr() == 2);
	assert(rez.get_den() == 21);
}

void test_mul() {
	Rational a(3, 4), b(2, 5), rez;
	rez = a * b;
	assert(rez.get_ctr() == 3);
	assert(rez.get_den() == 10);
}

void test_div() {
	Rational a(1, 4), b(5, 3), rez;
	rez = a / b;
	assert(rez.get_ctr() == 3);
	assert(rez.get_den() == 20);
}

void test_pow() {
	Rational a(5, 2), b(3, 8), rez;
	rez = a ^ 2;
	assert(rez.get_ctr() == 25);
	assert(rez.get_den() == 4);
	rez = b ^ -2;
	assert(rez.get_ctr() == 64);
	assert(rez.get_den() == 9);
}

void test_inv() {
	Rational a(7, 3), b(2, 15), rez;
	rez = a.inverse();
	assert(rez.get_ctr() == 3);
	assert(rez.get_den() == 7);
	rez = b.inverse();
	assert(rez.get_ctr() == 15);
	assert(rez.get_den() == 2);
}

void run_all_tests() {
	test_constructor();
	test_irreducible();
	test_add();
	test_sub();
	test_mul();
	test_div();
	test_pow();
	test_inv();
}