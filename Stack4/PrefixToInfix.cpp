#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

string prefixToInfix(string prefix) {
    stack<string> st;

    // Traverse from right to left
    for (int i = prefix.length() - 1; i >= 0; i--) {
        char c = prefix[i];

        if (isalnum(c)) {
            st.push(string(1, c)); // push operand
        }
        else if (isOperator(c)) {
            string op1 = st.top(); st.pop();
            string op2 = st.top(); st.pop();
            string expr = "(" + op1 + c + op2 + ")";
            st.push(expr);
        }
    }

    return st.top();
}

int main() {
    string prefix = "*+AB-CD"; // Equivalent to (A+B)*(C-D)
    string infix = prefixToInfix(prefix);
    cout << "Infix: " << infix << endl;
    return 0;
}
