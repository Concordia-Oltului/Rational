#pragma once

class Rational {
private:
	int denominator, count;
public:
	Rational();

	Rational(int a, int b);

	Rational(const Rational& r);

	int get_den();

	int get_ctr();

	void show_nr();

	void irreducible();
	
	Rational operator=(const Rational& r);

	Rational operator+(const Rational& r);

	Rational operator-(const Rational& r);

	Rational operator*(const Rational& r);

	Rational operator/(const Rational& r);

	Rational operator^(int power);
	
	Rational inverse();

	~Rational();
};