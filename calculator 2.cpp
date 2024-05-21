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

int main()
{
    int num1, num2;
    char choise;
    cout << "give a number"<<endl;
    cin >> num1;
    cout << "give a number"<<endl;
    cin >> num2;
    cout << "dwse thn praksh: ";
    cin >> choise;
    switch (choise)
    {
        case '+':
           AddNumb(num1, num2);
           cout <<  AddNumb(num1, num2);
           break;
        case '-':
           MinusNumb(num1, num2);
           cout << MinusNumb(num1, num2);
           break;
        case '*':
           GinNum(num1, num2);
           cout << GinNum(num1, num2);
           break;
        case '/':
           DiaiNum(num1, num2);
           cout << DiaiNum(num1, num2);
           break;
    }
    
    return 0;
}
