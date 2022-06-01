#ifndef Peregruzka_H
#define Peregruzka_H
struct Complex {
	double re;
	double im;
};

void Calculator(int a, int b, char ch);
void Calculator(float a, float b, char ch);
void Calculator(double a, double b, char ch);
void Calculator(Complex a, Complex b, char ch);
#endif