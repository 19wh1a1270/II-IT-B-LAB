#include<iostream>
using namespace std;
int main()
{
   int i, max = 50; 
   float num, avg, sum = 0.0;

   for (i = 1; i <= max; i++) {
      cout <<"Enter a number\n";
      cin >> num;
      if (num < 0.0)
	  {
	  	 goto res;
      }
      sum += num;
   }

res:
   avg = sum / (i - 1);
   cout << "Sum = " << sum << "\n";
   cout <<"Average = " << avg;
   return 0;
}

