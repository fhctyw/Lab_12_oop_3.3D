// PubicRational.h
#pragma once
#include <string>
#include "Pair.h"
using namespace std;

class PubicRational : public Pair
{
public:
	PubicRational(int a = 0, int b = 0) : Pair(a, b) {};
	PubicRational(const Pair& p);
	PubicRational(const PubicRational& r);
	PubicRational& operator=(const PubicRational& r);

	Pair getPair() const { return *this; }
	void setPair(Pair p) { *this = p; }



	operator string() const;
	friend ostream& operator<<(ostream& out, const PubicRational& r);
	friend istream& operator>>(istream& in, PubicRational& r);

	friend PubicRational operator+(const PubicRational& r1, const PubicRational& r2);
	friend PubicRational operator/(const PubicRational& r1, const PubicRational& r2);
	friend PubicRational operator-(const PubicRational& r1, const PubicRational& r2);
};
