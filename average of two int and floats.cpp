#include <iostream>
using namespace std;

float Func_average1(float num1, float num2)
{   
    float average1;  
	     
	return average1 = (num1 + num2)/2;
}
int func_average2(int num3, int num4)
{
	int average2;
	
	return average2 = (num3 + num4)/2;
}

int main()
{
    int  int_num1, int_num2;
    float float_num1, float_num2;
    int number;
    
	cout<<"give 1 for int number or 2 for float number:  "<<endl;
	cin>>number;
	
	if(number == 1)
	{
		cout<<"give the first integer: "<<endl;
		cin>>int_num1;
		
		cout<<"give the second integer: "<<endl;
		cin>>int_num2;
		
		cout<<"the average is: "<<func_average2(int_num1, int_num2)<<endl;
	}
	if(number == 2)
	{
		cout<<"give the first float: "<<endl;
		cin>>float_num1;
		
		cout<<"give the second float: "<<endl;
		cin>>float_num2;
		
		cout<<"the average is: "<<Func_average1(float_num1, float_num2)<<endl;
	}
	
	
return 0;	
}
