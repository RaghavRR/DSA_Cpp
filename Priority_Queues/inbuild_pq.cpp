#include<iostream>
#include<queue>
using namespace std;

int main(){

    vector<int> v = {9,6,1,19,3,2,8,12,5};
    int arr[] = {9,6,1,19,3,2,8,12,5};
    priority_queue<int> pq; //maxheap
    priority_queue<int, vector<int>, greater<int> > minpq; //minheap
    priority_queue<int> maxhpvector(v.begin(), v.end()); //minheap
    priority_queue<int, vector<int>, greater<int> > minhpvector(v.begin(), v.end()); //minheap
    priority_queue<int> maxhparray(arr, arr+9); //maxheaparray
    priority_queue<int, vector<int>, greater<int> > minhparray(arr, arr+9); //minheaparray

    pq.push(4);
    pq.push(3);
    pq.push(11);
    pq.push(9);
    pq.push(14);
    pq.push(-1);
    pq.push(30);
    pq.push(44);
    pq.push(50);

    minpq.push(4);
    minpq.push(3);
    minpq.push(11);
    minpq.push(9);
    minpq.push(14);
    minpq.push(-1);
    minpq.push(30);
    minpq.push(44);
    minpq.push(50);
    
    cout<<pq.top()<<endl;
    cout<<minpq.top()<<endl;
    cout<<maxhpvector.top()<<endl;
    cout<<minhpvector.top()<<endl;
    cout<<maxhparray.top()<<endl;
    cout<<minhparray.top()<<endl;

    return 0;
}