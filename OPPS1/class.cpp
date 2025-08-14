#include<iostream>
#include<cstring>
using namespace std;

class Book{
    public:
    char name;
    int price;
    int noOfpages;

    int countBook(int p){
        if(price<p) return 1;
        else return 0;
    }

    bool isBookPresent(char book){
        if(name == book) return true;
        else return false;
    }
};

int main(){
    Book haaryPotter;
    haaryPotter.name = 'H';
    haaryPotter.price = 100;
    haaryPotter.noOfpages = 500;

    cout<<haaryPotter.countBook(2000)<<endl;
    cout<<haaryPotter.isBookPresent('y');
}