#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin>>a>>b;
	int sum, diff, div, mul, rem;
	sum = a + b;
	diff = a - b;
	div = a / b;
	mul = a * b;
	rem = a % b;
	cout<<"The addition of a and b is "<< sum << "\n";
	cout<<"The difference of a and b is "<< diff<< "\n";
	cout<<"The multiplication of a and b is "<<mul<< "\n";
	cout<<"The division of a and b is "<<div<<" \n";
	cout<<"The remainder when a is divided by b is "<<rem<<" \n";
	return 0;
	
}