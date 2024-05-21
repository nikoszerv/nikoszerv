#include <iostream>
#include <string>
using namespace std;

string ReverseString(string word)
{
    //getline(cin, word);
    return  string(word.rbegin(), word.rend());
}
int main()
{
    
    string word;
    string quit = "quit";
    while(word != "quit")
    {
    
       cout << "dwse ena string"<< endl;
       
       getline(cin, word);
       ReverseString(word);
       cout << ReverseString(word)<< endl; 
    
    }
    return 0;
}
