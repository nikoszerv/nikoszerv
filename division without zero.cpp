//division of two numbers except 0

#include <iostream>
using namespace std;

double Division(double num1, double num2)
{
    return num1/num2;
}

int main() {
  try {
    int num1, num2;
    string wrong = "give a number greater to 0";
    cout << "give a number: "<< endl;
    cin >> num1;
    cout << "give anotherone: "<< endl;
    cin >> num2;
    if (num1 >= 1 && num2 >= 1 ) {
      cout << "the quotient is : " << Division(num1, num2) << endl;
    } else {
      throw(wrong);
    }
  }
  catch (string wrong) {
    cout << "operation denied - You must give a nuumber grater than 0" << endl;
    cout << wrong;  
  }
  return 0;
}
