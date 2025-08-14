#include<iostream>
using namespace std;

class Vehicle{
    public:
    int tyreSize;
    int enginSize;
    int lights;
    string companyName;
};

class Car: public Vehicle{
public:
    int steeringSize;
};

class Bike : public Vehicle{
public:
    int handleSize;
};

class A{
private:
    int a_ka_private; //can't be access, cant't br inheritance
protected:
    int a_ka_protected; //
public:
    int a_ka_public;
};

class B : protected A{

};



int main(){
    // Bike honda;
    // honda.handleSize = 5;
    // honda.tyreSize = 10;
    // honda.enginSize = 200;
}