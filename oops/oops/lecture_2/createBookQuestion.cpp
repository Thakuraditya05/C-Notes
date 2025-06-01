#include<bits/stdc++.h>
using namespace std;

// class Book{ 
// private:
//     int score; // data memnber
//     int health;  
//     string name;
// public:
//     // setter -->jo value ko set karenge 
//     void setScore(int s){
//         score=s;
//     }
//     void setHealth(int h){
//         health=h;
//     }
//     void setname(string n){
//         name=n;
//     }
//     // getter --->ab shidhi baat hai ki print bhi krwana bhi padega elemnt ko kisi trah lekin data type ko bina acccess kiye hua 
//     int getScore(){
//         return score;
//     }
//     int gethealth(){
//         return health;
//     }
//     string getName(){
//         return name;
//     }
// };

class Book{ 
public:
    int price; // data memnber
    int noOfPages;  
    string name;
 
    // setter -->jo value ko set karenge 
    int  countBook(int p){
        if(price<p)return 1;
        else return 0;
    }
    bool isBookPresent(string book){
       if(name==book)return true;
       else return false;
    }

};

int main(){
Book hp;
hp.name='and';
hp.price=500;
hp.noOfPages=100;
cout<<hp.countBook(6000);
cout<<hp.isBookPresent("hp");
}