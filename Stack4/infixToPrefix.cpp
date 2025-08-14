#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int priority(char c) {
    if(c == '+' || c == '-') return 1;
    if(c == '*' || c == '/') return 2;
    return 0;
}

string infixToPrefix(string s) {
    reverse(s.begin(), s.end());

    // Swap '(' with ')' and vice versa
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(') s[i] = ')';
        else if(s[i] == ')') s[i] = '(';
    }

    stack<char> st;
    string result;

    for(int i = 0; i < s.length(); i++) {
        char c = s[i];

        // If operand, add to result
        if(isalnum(c)) {
            result += c;
        }
        // If '(', push to stack
        else if(c == '(') {
            st.push(c);
        }
        // If ')', pop until '('
        else if(c == ')') {
            while(!st.empty() && st.top() != '(') {
                result += st.top(); st.pop();
            }
            if(!st.empty()) st.pop(); // pop '('
        }
        // If operator
        else {
            while(!st.empty() && priority(c) < priority(st.top())) {
                result += st.top(); st.pop();
            }
            st.push(c);
        }
    }

    // Pop remaining
    while(!st.empty()) {
        result += st.top(); st.pop();
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string infix = "(A+B)*(C-D)";
    string prefix = infixToPrefix(infix);
    cout << "Prefix: " << prefix << endl;
    return 0;
}
