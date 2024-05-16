#include <iostream>
#include <cmath>
using namespace std;

int powers(int num, int pownum)
{
   int power;	
   power = pow(num, pownum);
   return power; 
}

int main()
{
 
  for(int num=0; num< 1; ++num)
  {
  	int pownum;
	int power;
	cout<<"give a number: "<<endl;
	cin>>num;
	cout<<"give a power: "<<endl;
	cin>>pownum;
	power=powers(num,pownum);
	cout<<"the power of this number is: "<<power<<endl;
  }  
  	
return 0;
}
