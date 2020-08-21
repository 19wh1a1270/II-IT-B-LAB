#include<iostream>
using namespace std;
int main()
{
	int i = 0, sum = 0;
	do
	{
		cout<<"enter the number to add :";
		cin>>i;
		sum = sum + i;
	}
	while(i != 0);
	cout<<"sum is "<<sum<<"\n";
	return 0;
}