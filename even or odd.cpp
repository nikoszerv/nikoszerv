//eisagwgh arithmou apo ton xrhsth kai na vgazei amainai artios h peritos

#include <iostream>
using namespace std;

string even_or_odd(int num)
{
	string res = "___";
	if (num % 2 == 0 )
	{
	   res = "even";
	}else{
	   res = "odd";
	}
	return res;
}

int main()
{
  int number; 	
  
  cout<<"give me a number: "<<endl;
  cin>>number;
  
  cout<< "the number "<<number<< " is " + even_or_odd(number) + "."<<endl;
  return 0;	
}	

