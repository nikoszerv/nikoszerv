//calculate the product of three numbers

#include <iostream>
using namespace std;

int ginomenou(int num1, int num2, int num3)
{
    int ginomeno;
    ginomeno = num1*num2*num3;
    return ginomeno;
}

int main()
{
    int num1;
    int num2;
    int num3;
    int ginomeno;
    cout<<"dwse enan arithmo"<<endl;
    cin>>num1;
    cout<<"dwse akoma enan"<<endl;
    cin>>num2;
    cout<<"dwse akoma enan"<<endl;
    cin>>num3;
    
    
    ginomeno = ginomenou(num1, num2, num3);
    
    cout<< "to ginomeno einai: "<<ginomeno<<endl;
    return 0;
}

