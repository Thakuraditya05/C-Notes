#include<iostream>
#include<vector>
#include<string>


using namespace std;

class Bike{
public: 
    static int  noOfbikes; //this belong too the class only 
    int tyreSize;
    int engineSize;
    
    // Bike (int tyreSize, int engineSize){
    //     this->tyreSize=tyreSize;
    //     this->engineSize=engineSize;
    //     cout<<"constructor Call hua"<<endl;
    // }


    // initialisation list 
    Bike(int tS, int eS=200):tyreSize(tS),engineSize(eS){}
    
// iss poinnt se constr intsilation ke liye 

};


// }
int main(){
    
    // print();
    // print();
    // print();

    Bike tvs(12,100);
    Bike honda(13,50);
    Bike platina(15,350);

    bool flag=true;
    if(flag==true){
        Bike bmw(20,200);
        cout<<bmw.engineSize<<"  "<<bmw.tyreSize<<endl;
    }
    
  
    
    
    
    
    

}