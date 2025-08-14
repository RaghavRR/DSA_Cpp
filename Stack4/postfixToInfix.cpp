#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

string postfixToInfix(string postfix) {
    stack<string> st;

    for (char c : postfix) {
        if (isalnum(c)) {
            string op(1, c);
            st.push(op);
        }
        else if (isOperator(c)) {
            string op2 = st.top(); st.pop();
            string op1 = st.top(); st.pop();
            string expr = "(" + op1 + c + op2 + ")";
            st.push(expr);
        }
    }

    return st.top();
}

int main() {
    string postfix = "AB+CD-*"; // Equivalent to (A+B)*(C-D)
    string infix = postfixToInfix(postfix);
    cout << "Infix: " << infix << endl;
    return 0;
}
