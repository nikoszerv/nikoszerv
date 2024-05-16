#include <iostream>

using namespace std;
double fahreneitTocelsius(double fahreneit)
{
    double celsius;
    celsius = (fahreneit - 32.0)*5.0/9.0;
    return celsius;
}
int main()
{
    
    float fahreneit_min, fahreneit_max;
    float celsius_min, celsius_max;
    cout<<"vale thn mikroterh thermokrasia se fahr: ";
    cin>>fahreneit_min;
    
    cout<<"vale thn megalyterh thermokrasia se fahr: ";
    cin>>fahreneit_max;
    
    celsius_min = fahreneitTocelsius(fahreneit_min);
    celsius_max = fahreneitTocelsius(fahreneit_max);
    
    cout << "h mikroterh  thermokrasia se  celsius einai: " << celsius_min << endl;
    cout << "h megalyterh  thermokrasia se  celsius einai: " << celsius_max << endl;
    return 0;
      
    
}
