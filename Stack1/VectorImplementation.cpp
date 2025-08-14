#include<iostream>
#include<vector>
using namespace std;

class Stack{
public:
    vector<int> v;
    Stack(){
        
    }
    void push(int val){ //no overflow condition
        v.push_back(val);
    }
    void pop(){
        if(v.size()==0){
            cout<<"Stack is empty"<<endl;
        }
        v.pop_back();
        return;
    }
    int top(){
        if(v.size()==0){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return v[v.size()-1];
    }
    int size(){
        return v.size();
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.top();
    cout<<st.size()<<endl;;
    st.pop();
    cout<<st.size();
}
