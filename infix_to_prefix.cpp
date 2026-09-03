#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int precedence(char op)
{
    if(op == '+' || op == '-')
        return 1;

    if(op == '*' || op == '/' || op == '%')
        return 2;

    if(op == '^')
        return 3;

    return 0;
}

string infixToPrefix(string infix)
{
    stack<char> st;
    string result = "";
    reverse(infix.begin(), infix.end());
    for(int i = 0; i < infix.length(); i++)
    {
        if(infix[i] == '(')
            infix[i] = ')';
        else if(infix[i] == ')')
            infix[i] = '(';
    }
   for(int i=0; i < infix.length(); i++)
   {
    char ch = infix[i];

    if(isalnum(ch))
    {
        result += ch;
    }
    else if(ch == '(')
    {
        st.push(ch);
    }
    else if(ch == ')')
    {
        while(!st.empty() && st.top() != '(')
        {
            result += st.top();
            st.pop();
        }
        st.pop(); 
    }
    else
    {
        while(!st.empty() && precedence(st.top()) >= precedence(ch))
        {
            result += st.top();
            st.pop();
        }
        st.push(ch);
    }
}
while(!st.empty())
{
    result += st.top();
    st.pop();
}
  reverse(result.begin(), result.end());
  return result;
}
int main()
{
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;
    cout<<"Prefix expression: " << infixToPrefix(infix) << endl;
    return 0;
}
