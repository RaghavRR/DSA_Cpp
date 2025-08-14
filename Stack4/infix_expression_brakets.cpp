#include<iostream>
#include<stack>
using namespace std;

int priority(char ch){
    if(ch == '+' || ch == '-') return 1;
    else if(ch == '*' || ch == '/') return 2;
    else return 0; // for '('
}

int solve(int val1, int val2, char ch){
    if(ch=='+') return val1+val2;
    if(ch=='-') return val1-val2;
    if(ch=='*') return val1*val2;
    if(ch=='/') return val1/val2;
    return 0;
}

int main(){
    string s = "(7+9)*4/8-3";
    stack<int> val;
    stack<char> op;

    for(int i=0; i<s.length(); i++){
        if(isdigit(s[i])){
            val.push(s[i]-'0');
        }
        else if(s[i] == '('){
            op.push(s[i]);
        }
        else if(s[i] == ')'){
            while(!op.empty() && op.top() != '('){
                char ch = op.top(); op.pop();
                int val2 = val.top(); val.pop();
                int val1 = val.top(); val.pop();
                val.push(solve(val1, val2, ch));
            }
            op.pop(); // pop '('
        }
        else{ // operator
            while(!op.empty() && priority(s[i]) <= priority(op.top())){
                char ch = op.top(); op.pop();
                int val2 = val.top(); val.pop();
                int val1 = val.top(); val.pop();
                val.push(solve(val1, val2, ch));
            }
            op.push(s[i]);
        }
    }

    while(!op.empty()){
        char ch = op.top(); op.pop();
        int val2 = val.top(); val.pop();
        int val1 = val.top(); val.pop();
        val.push(solve(val1, val2, ch));
    }

    cout << val.top() << endl;
}
