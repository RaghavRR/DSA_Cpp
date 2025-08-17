#include<iostream>
#include<set>
#include<map>
using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(1);
    s.insert(0);

    for(int ele: s){
        cout<<ele<<" ";
    }
    cout<<endl;

    map<int,int> m;
    m[1] = 30;
    m[3] = 10;
    m[2] = 20;

    for(auto x: m){
        cout<<x.first<<" ";
    }
}