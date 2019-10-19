#include "Complex.h"
#include <iomanip>
using namespace std;

Complex::Complex() {
	a = 0, b = 0;
}
Complex::Complex(double q) {
	b = 0;
}
Complex::Complex(double q, double z) {
	a = q;
	b = z;
}

Complex operator+ (Complex t, Complex u) {
	Complex res;
	res.a = t.a + u.a;
	res.b = t.b + t.b;
	return res;
}

Complex operator- (Complex t, Complex u) {
	Complex res;
	res.a = t.a - u.a;
	res.b = t.b - t.b;
	return res;
}

Complex operator* (Complex t, Complex u) {
	Complex res;
	res.a = (t.a*u.a) - (t.b*u.b);
	res.b = (t.a*u.b) + (t.b*u.a);
	return res;
}

Complex operator/ (Complex t, Complex u) {
	Complex res;
	res.a = ((t.a*u.a) - (t.b*u.b)) / (u.a*u.a + u.b*u.b);
	res.b = ((u.a*t.b) - (t.a*t.b)) / (u.a*u.a + u.b*u.b);
	return res;
}


std::ostream& operator<< (std::ostream &out, Complex& t) {
	if (t.b>0) {
		out << "Complex number: " << t.a << " + " << t.b << "*i" << endl;
	}
	else if (t.b<0) {
		out << "Complex number: " << t.a << t.b << "*i" << endl;
	}
	else {
		out << "Complex number:fd " << t.a <<endl;
	}

	return out;
}

std::istream& operator>> (std::istream &in, Complex& t) {
	double a, b;
	in >>a >> b;
	t.set(a, b);
	return in;
}


void Complex::get() {
	if (b>0) {
		std::cout << fixed << setprecision(3) << "Complex number: " << a << "+" << b << "*i" << std::endl;
	}
	else if (b<0) {
		std::cout << fixed << setprecision(3) << "Complex number: " << a << b << "*i" << std::endl;
	}
	else {
		std::cout << fixed << setprecision(3) << "Complex number: " << a << std::endl;
	}
}

void Complex::set(double q, double z) {
	a = q;
	b = z;
}

