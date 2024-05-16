//ypologismos ginomenou dyo arithmwn
//me synarthsh

#include <iostream>
using namespace std;
int ginomenou(int a, int b)
{
    int ginomeno;
    ginomeno = a*b;
    return ginomeno;
}
int main()
{
    int a;
    int b;
    int ginomeno;
    cout<<"dwse enan arithmo"<<endl;
    cin>>a;
    cout<<"dwse akoma enan"<<endl;
    cin>>b;
    
    ginomeno = ginomenou(a, b);
    
    cout<< "to ginomeno einai: "<<ginomeno<<endl;
    return 0;
}

