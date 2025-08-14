#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

string prefixToPostfix(string prefix) {
    stack<string> st;

    for (int i = prefix.length() - 1; i >= 0; i--) {
        char c = prefix[i];

        if (isalnum(c)) {
            st.push(string(1, c)); // convert char to string
        }
        else if (isOperator(c)) {
            string op1 = st.top(); st.pop();
            string op2 = st.top(); st.pop();
            string expr = op1 + op2 + c;
            st.push(expr);
        }
    }

    return st.top();
}

int main() {
    string prefix = "*+AB-CD"; // equivalent to infix: (A+B)*(C-D)
    string postfix = prefixToPostfix(prefix);
    cout << "Postfix: " << postfix << endl;
    return 0;
}
