#include <iostream>
#include "PrivateRational.h"
#include "PubicRational.h"
using namespace std;

int main()
{
	PrivateRational r1 = { 4, 2 };
	PubicRational r2 = { 4, 2 };

	cout << r1 << endl;
	cout << r2 << endl;
	cout << r1 + r1 << endl;;
	cout << r2 + r2 << endl;;

	return 0;
}

