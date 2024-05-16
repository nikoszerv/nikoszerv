//statement of name gender and birth date and calculates your age!

#include <iostream>
using namespace std;

string say_hi(string name)
{
    return "hello! " + name;
}
int calculateage(int year, int age)
{
    return age = 2024-year;
}
string genderstatement(string gender)
{
    return gender;
}
int main()
{
    int year, age;
    string onoma, gender;
    
    cout<<"enter your name please: "<<endl;
    cin>>onoma;
    cout<<"please enter your birth date:  "<<endl;
    cin>>year;
    cout<<"please enter your gender: "<<endl;
    cin>>gender;
    cout<< say_hi(onoma)<<endl;
    cout<< calculateage(year, age)<<" old"<<endl;
    cout<< genderstatement(gender);
    
    return 0;
}

