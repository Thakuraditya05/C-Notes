#include<iostream>
#include<vector>
#include<string>


using namespace std;

class Bike{
public: 
    static int  noOfbikes; //this belong too the class only 
    int tyreSize;
    int engineSize;
    

    // constructor overLoading 
    // code padhne me thik lgta hai 
    Bike(int tS, int eS):tyreSize(tS),engineSize(eS){}
    Bike(int tS):tyreSize(tS),engineSize(100){}
    Bike():tyreSize(12),engineSize(100){}

    



};
// // function overLoading
// //function of same name banaye ja skte hai 
// // argument ka data type ifferent 
// // (agar unka argument number differnt ho)  
// void add(int a, int b){
//     cout<<a+b<<endl;
// }
// // int  add(int a, int b){ //ye nnahi kr kste hai 
// //     cout<<a+b<<endl;
// //     return a+b;
// // }
// void add(int a, double b){
//     cout<<a+b<<endl;
// }
// void add(int a){
//     cout<<a+10<<endl;
// }

// calculator  same code type ki re-usebility badh gayi hai

void calculatArea(int l, int b){
    cout<<l*b<<endl;
}
void calculatArea(int r){
    cout<<3.14*r*r<<endl;
}
void calculatArea(int s){
    cout<<s*s<<endl;
}
 



int main(){

        calculatArea(5);
        calculatArea(1,2);
        calculatArea(1,4.5);

    // Bike tvs(12,100);
    // Bike honda(13,50);
    // Bike platina(15,350);
// 
    // bool flag=true;
    // if(flag==true){
    //     Bike bmw(20,200);
    //     cout<<bmw.engineSize<<"  "<<bmw.tyreSize<<endl;
    // }

}