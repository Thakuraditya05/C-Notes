#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Bike{
public: 
    int tyreSize;

    Bike (){
        cout<<"constructor Call hua"<<endl;
    }

};
int main(){
    Bike tvs;//compile krte samaye object create hoga // constructor ko call jayegi jo ki hidden hai but hota hai by default 
    //  constructor of bike will never return player, wo bike hi return karega yani return type wahi class hogi 

    Bike honda;
    Bike platina;
    // run 
}