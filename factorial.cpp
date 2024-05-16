#include <iostream>
using namespace std;

int factorial(int number) 
{
   int ans = 1;
   for (int i = 1; i <= number; ++i) {
      ans *= i;
   }
   return ans;
}

int main()
{
	int num;
	
	cout<<"insert a number: "<<endl;
	cin>>num;
	
	cout<<"factorial of "<< num << "is: "<<factorial(num)<<endl;
	return 0;
	
}

