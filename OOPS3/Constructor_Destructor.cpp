#include<iostream>
using namespace std;

class Bike{
public:
    int tyreSize;
    int engineSize;
    //default constructor
    // Bike(){
    //     cout<<"Construtor call hua."<<endl;
    // }
    //parameterized constructor
    Bike(int tyreSize, int engineSize){
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
    }
    ~Bike(){
        cout<<"Destructor"<<endl;
    }
};



int main(){
    cout<<"Hii"<<endl;
    //Bike tvs();
    Bike tvs(10,100);
    Bike honda(12,290);
    bool flag = true;
    if(flag == true){
        Bike bmw(13,345);
        cout<<bmw.tyreSize<<" "<<bmw.engineSize<<endl;
    }
    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
}