#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Vehicle{ 
public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;

    Vehicle(){
        cout<<"bike ka constructor call hua"<<endl;
    }
    // ye do  function hone hi hone chahiye hrr inherited class me 
    virtual void calCulateMilage()=0;
    virtual void refuel()=0;

    void showCompany(){
        cout<<companyName<<endl;
    }
};


class Bike : public Vehicle{//base class // parent class
public: 

    int handlSize;

    Bike(){
        cout<<"bike constructor was called"<<endl;
    }

    void calCulateMilage(){
        cout<<handlSize*10<<endl;
    }
    void refuel(){
     cout<<handlSize*15<<endl;   
    }


};



int main(){
    Bike bike;
    bike.handlSize=10;
    bike.calCulateMilage();
    bike.refuel();

}