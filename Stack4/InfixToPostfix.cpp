#include <iostream>
#include <stack>
#include <string>
using namespace std;

int priority(char c) {
    if(c == '+' || c == '-') return 1;
    else if(c == '*' || c == '/') return 2;
    return 0;
}

string infixToPostfix(string s) {
    stack<char> st;
    string result = "";

    for(char c : s) {
        if(isalnum(c)) {
            result += c;
        }
        else if(c == '(') {
            st.push(c);
        }
        else if(c == ')') {
            while(!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop(); // pop '('
        }
        else { // operator
            while(!st.empty() && priority(st.top()) >= priority(c)) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // Pop remaining operators
    while(!st.empty()) {
        result += st.top();
        st.pop();
    }

    return result;
}

int main() {
    string infix = "(A+B)*(C-D)";
    string postfix = infixToPostfix(infix);
    cout << "Postfix: " << postfix << endl;
    return 0;
}
