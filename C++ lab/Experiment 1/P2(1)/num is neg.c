#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a > 0)
	cout<<"The number "<<a<<" is positive ";
	else if( a < 0)
	cout<<"The number "<<a<<" is negative";
	else
	cout<<"The number "<<a<<" is neither positive neither negative";
	return 0;
}