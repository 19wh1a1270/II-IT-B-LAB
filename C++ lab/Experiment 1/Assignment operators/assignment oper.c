#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cin >> a ;
	b = a += 5;
	c = a -= 10;
	d = a *= 2;
	e = a /= 5;
	cout << "The value of a += 5 is " << b << "\n";
	cout << "The value of a -= 10 is " << c << "\n";
	cout << "The value of a *= 2 is " << d<< "\n";
	cout << "The value of a /= 5 is " << e << "\n";
	return 0;
}