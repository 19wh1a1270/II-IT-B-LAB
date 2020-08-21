#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cin>>a>>b>>c;
	c = (a > b && b > c);
	d = (a < b || b < c);
	e = !(a > b && b > c);
	cout<<" usage of && operator " <<c<<"\n";
	cout<<" usage of || operator " <<d<<"\n";
	cout<<"usage of ! operator " <<e<<"\n";
	return 0;
}