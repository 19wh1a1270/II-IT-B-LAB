#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, f, g, h;
	cin>>a>>b;
	c = a > b;
	d = a < b;
	e = a == b;
	f = a <= b;
	g = a >= b;
	h = a != b;
	cout<<"check if a > b "<<c<<"\n";
	cout<<"check if a < b "<<d<<"\n";
	cout<<"check if a == b "<<e<<"\n";
	cout<<"check if a <= b "<<f<<"\n";
	cout<<"check if a >= b "<<g<<"\n";
	cout<<"check if a != b "<<h<<"\n";
	return 0;
	
}