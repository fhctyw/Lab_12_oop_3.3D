// PubicRational.cpp
#include "PubicRational.h"
#include <iostream>
#include <sstream>
using namespace std;


PubicRational::PubicRational(const Pair& p)
{
	setA(p.getA());
	setB(p.getB());
}

PubicRational::PubicRational(const PubicRational& p)
{
	*this = p;
}

PubicRational& PubicRational::operator=(const PubicRational& p)
{
	setA(p.getA());
	setB(p.getB());
	return *this;
}


PubicRational::operator string() const
{
	stringstream ss;
	ss << getA() << '/' << getB();
	return ss.str();
}

ostream& operator<<(ostream& out, const PubicRational& r)
{
	out << string(r);
	return out;
}

istream& operator>>(istream& in, PubicRational& r)
{
	int a, b;
	cout << "Чисельник: "; cin >> a;
	cout << "Знаменник: "; cin >> b;
	r.setA(a);
	r.setB(b);
	return in;
}

PubicRational operator+(const PubicRational& r1, const PubicRational& r2)
{
	return PubicRational({ r1.getA() * r2.getB() + r1.getB() * r2.getA(), r1.getB() * r2.getB() });
}

PubicRational operator/(const PubicRational& r1, const PubicRational& r2)
{
	return PubicRational({ r1.getA() * r1.getB(), r2.getA() * r2.getB() });
}

PubicRational operator-(const PubicRational& r1, const PubicRational& r2)
{
	return PubicRational({ r1.getA() * r2.getB() - r1.getB() * r2.getA(), r1.getB() * r2.getB() });
}
