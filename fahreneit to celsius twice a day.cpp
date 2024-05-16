// i convert the temperature for the highest temp o f the day and the lowest
//thermokrasia ths hmeras kai mia gia thn mikroterh

#include <iostream>
using namespace std;

int main()
{
    double f_min, f_max;
    double celsius_min, celsius_max;
    
    cout << "please enter the lowest temp in fahreneit: " << endl;
    cin >> f_min;
    celsius_min = (f_min - 32) * 5/9;
    cout << "please enter the highest temp in fahreneit: " << endl;
    cin >> f_max;
    celsius_max = (f_max - 32) * 5/9;
    
    cout << "the lowest temp of the day in celsius is: " << celsius_min << endl;
    cout << "the highest temp in celsius is: " << celsius_max << endl;
    return 0;
}
