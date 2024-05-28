// calculator 

#include <iostream>
#include <cmath>
using namespace std;

int AddNumb(int num1, int num2)
{
    return num1 + num2;
}
int MinusNumb(int num1, int num2)
{
    return num1 - num2;
}
int GinNum(int num1, int num2)
{
    return num1 * num2; 
}
double DiaiNum(double num1, double num2)
{
    return  num1 / num2;
}
int factorialNum(int num1) 
{
   int ans = 1;
   for (int i = 1; i <= num1; ++i) {
      ans *= i;
   }
   return ans;
}
double sqrtNum(double num1)
{
	double result;
	if (num1 < 0) {
        cout << "the number have to be non negetaive" << endl;
    } else {
        double result = sqrt(num1); // calculation of sqrt
        cout << "the sqrt of: " << num1 << " is: " << result << endl;
    }
    return  result;
}


int main()
{
    int num1, num2;
    char choise;
    cout << "dwse thn praksh: ";
    cin >> choise;
    //cout << "give a number"<<endl;
    //cin >> num1;
    //cout << "give a number"<<endl;
    //cin >> num2;
    switch (choise)
    {
        case '+':
           cout << "give a number"<<endl;
           cin >> num1;
           cout << "give a number"<<endl;
           cin >> num2;
           AddNumb(num1, num2);
           cout <<  AddNumb(num1, num2);
           break;
        case '-':
           cout << "give a number"<<endl;
           cin >> num1;
           cout << "give a number"<<endl;
           cin >> num2;	
           MinusNumb(num1, num2);
           cout << MinusNumb(num1, num2);
           break;
        case '*':
           cout << "give a number"<<endl;
           cin >> num1;
           cout << "give a number"<<endl;
           cin >> num2;	
           GinNum(num1, num2);
           cout << GinNum(num1, num2);
           break;
        case '/':
           cout << "give a number"<<endl;
           cin >> num1;
           cout << "give a number"<<endl;
           cin >> num2;
           DiaiNum(num1, num2);
           cout << DiaiNum(num1, num2);
           break;
        case '!':
           cout << "give a number"<<endl;
           cin >> num1;	
           factorialNum(num1);
           cout << factorialNum(num1);
           break;
        case 'r':
           cout << "give a number"<<endl;
           cin >> num1;	
           sqrtNum(num1);
           cout << sqrtNum(num1);
           break;
    }
    
    return 0;
}
