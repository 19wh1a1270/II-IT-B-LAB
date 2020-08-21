#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin>>a>>b;
	if(a > b)
	cout<<a<<" is greater than "<<b<<"\n";
	else if(a < b)
	cout<<a<<" is less than "<<b<<"\n";
	else
	cout<<a<<" and "<<b<<" are equal \n";
	return 0;
}