#include "Rational.h"
#include <cassert>


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

void run_all_tests() {
	test_constructor();
	test_irreducible();
	test_add();
}