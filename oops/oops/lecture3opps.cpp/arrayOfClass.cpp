#include<bits/stdc++.h>
using namespace std;

class Gun{
public:
    int ammo;
    int damage;
    int scope;
};

class Player{ 
private:
    int health; // data memnber
    int age;  
    int score;
    bool alive;
    Gun gun; //class ke under object bi rakh skte hai 
public:
    // setter -->jo value ko set karenge 
    void setScore(int score){
       Player::score=score; //::scope resolution
    }
    void setHealth(int health){
       this->health=health; //thhis ka matlab ki class wali health =
    }
    void getAge(int age){
        this->age=age;
    }

    void isAlive(bool alive){
        this->alive=alive;
    }


     void setGun(Gun gun){
        this->gun=gun;
    }
    // getter --->ab shidhi baat hai ki print bhi krwana bhi padega elemnt ko kisi trah lekin data type ko bina acccess kiye hua 
    int getScore(){
        return score;
    }
    int gethealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    bool isAlive(){ 
        return alive;
    }
    Gun getGun(){
        return gun;
    }
};

void add(int a,int b){
    cout<<a+b;
}

int addScore(Player a, Player b){ //to data type  lega plyer type ke and playr ke undr get score naam ke method hota hao 
    return a.getScore()+b.getScore();
}

Player addMaxScore(Player a, Player b){ //to data type  lega plyer type ke and playr ke undr get score naam ke method hota hao 
    if(a.getScore()>b.getScore())return a;
    else return b;
}
int main(){
    Player a;//object creation, staticslly  memry allocation 
    Player b;

//     Gun akm;
//     akm.ammo=100;
//     akm.damage=50;
//     akm.scope=8;
//
//     a.setGun(akm);
//
//     Gun awm;
//     awm.ammo=15;
//     awm.damage=50;
//     awm.scope=4;
//
//
//     b.setGun(awm);
//
//     a.setHealth(100);
//     a.setScore(400);
//     a.getAge(16);
//     a.isAlive(true);
//  // int float string =======player
//     b.setHealth(100);
//     b.setScore(300);
//     b.getAge(16);
//     b.isAlive(true);
  //  
//     cout<<addScore(a,b)<<endl;
//     Player sanket=addMaxScore(a,b);
//     cout<<addMaxScore(a,b).getScore();//return type ek object hai jo ki player hai 
  //  
//
//     // dynamic memroty
//     Player *garg=new Player;
//     Player *krishna=new Player;
 //   
//     // garg--->pointer to object hai yr run time pe memroy me allocate krte hai 
//     // a, b, sanket objects hai but  *garg-->pointer to objects hai ye khud object nahi hai yee object address store krne wala hai bs 
//     Player raghav=(*garg);
//     raghav.setHealth(16);
//     cout<<raghav.getAge()<<endl;
//
//
//     // aaffter gun class
//     cout<<a.getGun().ammo;
//     cout<<b.getGun().ammo;
    
  Player player[2]={a,b};
  cout<<player[0].getAge();;


} 