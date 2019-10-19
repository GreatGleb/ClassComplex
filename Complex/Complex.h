#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <iostream>
#include <iomanip>
using namespace std;

class Complex {
public:
	Complex();
	Complex(double a);
	Complex(double a, double b);
	friend Complex operator+(Complex t, Complex u);
	friend Complex operator-(Complex t, Complex u);
	friend Complex operator*(Complex t, Complex u);
	friend Complex operator/(Complex t, Complex u);
	friend std::ostream& operator<< (std::ostream &out, Complex& t);
	friend std::istream& operator>> (std::istream &in, Complex& t);
	void get();
	void set(double q, double z);

private:
	double a;
	double b;
};


#endif // COMPLEX_H_INCLUDED
