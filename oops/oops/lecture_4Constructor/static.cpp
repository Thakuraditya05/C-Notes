#include<iostream>
#include<vector>
#include<string>


using namespace std;

class Bike{
public: 
    static int  noOfbikes; //this belong too the class only 
    int tyreSize;
    int engineSize;
    
    Bike (int tyreSize, int engineSize){
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
        cout<<"constructor Call hua"<<endl;
    }


    // static function bina object ke bn jate hai 
    static void increaseNoOfBikes(){
        // static function ke under static varble ko hi call krwaya ja ksta hai 
        // kyo nata rishita hota hai wo object bana bhi na ho na tabhi rahete hai 
        // 
        noOfbikes++; 
    }


};

int Bike::noOfbikes=10; // class ke under bike ki value ko set kr do 10 ke barabr jo ki fix ho jayega for all
int z=10;
// void print(){
//     // int b=10;
//     static int b=12; // static kr dene se keval ek baar b baega 
//     cout<<b<<endl;
//     b++;
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
    
    tvs.increaseNoOfBikes(); //sblle liye noOfBikes ki count badh jayegi 
    // cout<<tvs.tyreSize<<"  "<<tvs.engineSize<<endl;
    // cout<<honda.tyreSize<<"  "<<honda.engineSize<<endl;
    Bike ::increaseNoOfBikes();
    Bike ::increaseNoOfBikes();
    cout<<tvs.noOfbikes<<"   "<<honda.noOfbikes<<endl;
    
    
    
    
    int z=20;
    cout<<::z;//:: kon se illke ki baat ho rahi hai ye batata hai ye wala operature 
    cout<<z;

    

     



}