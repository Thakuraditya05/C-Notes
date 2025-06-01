#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Vehicle{ //base class // parent class
public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;
    // data functionn and data members dono child ke pass inherit ho jate  hai
    //  

    Vehicle(){
        cout<<"bike ka constructor call hua"<<endl;
    }

    void showCompany(){
        cout<<companyName<<endl;
    }
};



class Car: public Vehicle{ //car inherit vihelis  //
public:
    // int tyreSize;
    // int engineSize;
    // int lights;
    // string companyName;
    

};


class Bike : public Vehicle{//base class // parent class
public: 
    // int tyreSize;
    // int engineSize;
    // int lights;
    // string companyName;
    int handlSize;

    Bike(){
        cout<<"bike constructor was called"<<endl;
    }
};



int main(){
    Bike honda;
    honda.handlSize=7;
    honda.tyreSize=10;
    honda.engineSize=100;
    honda.companyName="honda";
    cout<<honda.tyreSize<<endl;
    honda.showCompany();

// pahle parents ka constrocter call hoga fir child ka constructor call hoga 
// even // multiple inheritance // multi level Inheritance pahle parent constructor call hoga fir child constructor
// kyo ki child ko exits krneke liye b chahiye hi chaiye 


}