#include<iostream>
using namespace std;

class Stack{
public:
    int arr[5];
    int idx;
    Stack(){
        idx=-1;
    }
    void push(int val){
        if(idx==4){
            cout<<"Stack is full"<<endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop(){
        if(idx==-1){
            cout<<"Stack is empty"<<endl;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
    void display(){
        for(int i=0; i<=idx; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
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
    cout<<st.size()<<endl;;
    st.display();
}
