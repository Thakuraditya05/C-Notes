#include<bits/stdc++.h>
using namespace std;

class Player{ 
private:
    int score; // data memnber
    int health;  
    string name;
public:
    // setter -->jo value ko set karenge 
    void setScore(int s){
        score=s;
    }
    void setHealth(int h){
        health=h;
    }
    void setname(string n){
        name=n;
    }
    // getter --->ab shidhi baat hai ki print bhi krwana bhi padega elemnt ko kisi trah lekin data type ko bina acccess kiye hua 
    int getScore(){
        return score;
    }
    int gethealth(){
        return health;
    }
    string getName(){
        return name;
    }
};

int main(){
    Player s;
    s.setname("aditya");
    s.setScore(6.7);
    s.setHealth(100);
    cout<<s.getName();
    cout<<s.gethealth();
    cout<<s.getScore();
}