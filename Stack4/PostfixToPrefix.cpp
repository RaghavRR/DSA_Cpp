#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

string postfixToPrefix(string postfix) {
    stack<string> st;

    for (char c : postfix) {
        if (isalnum(c)) {
            st.push(string(1, c)); // convert char to string and push
        }
        else if (isOperator(c)) {
            string op2 = st.top(); st.pop();
            string op1 = st.top(); st.pop();
            string expr = c + op1 + op2;
            st.push(expr);
        }
    }

    return st.top();
}

int main() {
    string postfix = "AB+CD-*"; // (A+B)*(C-D)
    string prefix = postfixToPrefix(postfix);
    cout << "Prefix: " << prefix << endl;
    return 0;
}
