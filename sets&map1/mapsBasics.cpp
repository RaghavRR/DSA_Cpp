#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string, int> m;
    pair<string, int> p1;
    p1.first = "raghav";
    p1.second = 33;
    m.insert(p1);
    
    m["manav"] = 12;
    m["ajay"] = 11;

    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;
    cout<<endl;

    m.erase("raghav");
    m.erase("manav");
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;

    cout<<m["ajay"]<<endl;
}