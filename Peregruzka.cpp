#include <iostream>
#include "Peregruzka.h"

void Calculator(int a, int b, char ch) {
	if (ch == '+') {
		std::cout << a + b;
	}
	else if (ch == '-') {
		std::cout << a - b;
	}
	else if (ch == '*') {
		std::cout << a * b;
	}
	else {
		std::cout << a / b;
	}

}
void Calculator(float a, float b, char ch) {
	if (ch == '+') {
		std::cout << a + b;
	}
	else if (ch == '-') {
		std::cout << a - b;
	}
	else if (ch == '*') {
		std::cout << a * b;
	}
	else {
		std::cout << a / b;
	}
}
void Calculator(double a, double b, char ch) {
	if (ch == '+') {
		std::cout << a + b;
	}
	else if (ch == '-') {
		std::cout << a - b;
	}
	else if (ch == '*') {
		std::cout << a * b;
	}
	else {
		std::cout << a / b;
	}
}
void Calculator(Complex a, Complex b, char ch) {
	if (ch == '+') {
		std::cout << a.re + b.re<<' '<< a.im + b.im<<'i';
	}
	else if (ch == '-') {
		std::cout << a.re - b.re << ' ' << a.im - b.im << 'i';
	}
	else if (ch == '*') {
		Complex c;
		c.re = (a.re * b.re) - (a.im * b.im);
		c.im = (a.re * b.im) + (a.im * b.re);
		std::cout << c.re << ' ' << c.im << 'i';
	}
	else {
		Complex c;
		c.re = (a.re * b.re) - (a.im * (-b.im));
		c.im = (a.re * (-b.im)) + (a.im * b.re);
		b.re = (b.re * b.re) - (b.im * (-b.re));
		std::cout << c.re/ b.re << ' ' << c.im/ b.re << 'i';
	}
}