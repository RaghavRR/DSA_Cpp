#include<iostream>
#include<climits>
#include<vector>
using namespace std;

class MaxHeap{
    vector<int> hp;
    int i; //[0,i] 

    void upheapify(int ci){
        while(ci > 0){
            int pi = (ci - 1)/2;
            if(hp[pi] < hp[ci]){
                swap(hp[pi], hp[ci]);
                ci = pi;
            }
            else {
                break;
            }
        }
    }
    void downheapify(int idx){
        while(idx< hp.size()){
            int lc = 2*idx+1;
            int rc = 2*idx+2;
            if(lc >= hp.size()) break;
            int maxEl = idx;
            if(hp[lc]>hp[maxEl]){
                maxEl = lc;
            }
            if(rc < hp.size() && hp[rc] > hp[maxEl]){
                maxEl = rc;
            }
            if(maxEl != idx){
                swap(hp[idx], hp[maxEl]);
                idx = maxEl;
            }
            else {
                break;
            }
        }
    }
public:


    void push(int element){
        hp.push_back(element);
        upheapify(hp.size()-1);
    }

    bool empty(){
        return hp.size() == 0;
    }

    void pop(){
    if(empty()) return;
    swap(hp[0], hp[hp.size()-1]);  // root <-> last swap
    hp.pop_back();                 // last delete
    if(!empty()) downheapify(0);   // root ko neeche bhejo
}

    void display(){
        cout<<"[";
        for(int i=0; i<hp.size();i++){
            cout<<hp[i]<<" ";
        }
        cout<<"]\n";
    }   

    int peak(){
        if(empty()) return INT_MIN;
        return hp[0];
    }

    MaxHeap(vector<int>& v){  
        hp = v;
        //o(nlogn)
        for(int i=0; i<hp.size(); i++){
            upheapify(i);
        }

    }
};

int main(){
    vector<int> v = {9,6,1,19,3,2,8,12,5};
    MaxHeap hp(v);
    
    hp.display();
    hp.push(34);
    hp.display();

    return 0;
}