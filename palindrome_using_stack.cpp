// wap to check if the given number is a palindrome using stack.
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string str;
    stack<char> s;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        s.push(str[i]);
    }
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=s.top())
        {
            cout<<"Not a palindrome"<<endl;
            return 0;
        }
        s.pop();
    }
    cout<<"Palindrome"<<endl;
    return 0;
}