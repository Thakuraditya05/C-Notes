#include<bits/stdc++.h>
using namespace std;

class Player{ //blue print  ofr data type 
public: //taki variable ko bahar se access kr sake, access modifiers2
    int score; // data memnber
    int health;  
     string name;
    // classs ke under wale function is data 
    void showHealth(){ // function tabhi kaam aayega jb object banegi 
        cout<<"health is "<<health<<endl;
    }

    void showScore(){ // function tabhi kaam aayega jb object banegi 
        cout<<"score is "<<score<<endl;
    }
    
    void showName(){ // function tabhi kaam aayega jb object banegi 
        cout<<"name is "<<name<<endl;
    }
};

int main(){
    Player amit; // ek bject hai    whose data type is defined at above 
    amit.health=100;
    amit.name="amit";
    amit.score=90;
    // cout<<amit.health<<endl;
    // cout<<amit.name<<endl;
    // cout<<amit.score<<endl;
    amit.showHealth(); //object kka function ---> jb object banegi tabhii   function exits karega nahi to nahi karega 
    amit.showScore();
    amit.showName();
    
}