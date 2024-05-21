// backward print of a string


#include <iostream>
#include <string>
using namespace std;

string ReverseString(string word)
{
    return  string(word.rbegin(), word.rend());
}
int main()
{
    
    string word;
    cout << "dwse ena string"<< endl;
    getline(cin, word);
    ReverseString(word);
    cout << ReverseString(word);  
    return 0;
}
