#include<iostream>
using namespace std;
int main()
{
	int num, sum = 0, i = 0;
	for(i = 0; i < 10; i++)
	{
		cin>>num;
		if(num < 0)
		{
		    break;
	    }
	    sum += num;
		
	}
	cout<<"The sum of values is "<<sum<<"\n";
	return 0;
}