#include<bits/stdc++.h>
using namespace std;

class Player{ 
private:
    int health; // data memnber
    int age;  
    int score;
    bool alive;
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
    a.setHealth(100);
    a.setScore(400);
    a.getAge(16);
    a.isAlive(true);
 // int float string =======player
    b.setHealth(100);
    b.setScore(300);
    b.getAge(16);
    b.isAlive(true);
    
    cout<<addScore(a,b)<<endl;
    Player sanket=addMaxScore(a,b);
    cout<<addMaxScore(a,b).getScore();//return type ek object hai jo ki player hai 
    

    // dynamic memroty
    Player *garg=new Player;
    Player *krishna=new Player;
    
    // garg--->pointer to object hai yr run time pe memroy me allocate krte hai 
    // a, b, sanket objects hai but  *garg-->pointer to objects hai ye khud object nahi hai yee object address store krne wala hai bs 
    Player raghav=(*garg);
    raghav.setHealth(16);
    cout<<raghav.getAge()<<endl;
    
    (*krishna).setHealth(100);
    cout<<(*krishna).gethealth()<<endl;
// (*garg)--->  ->  ==krishna->setHealth(100);
// (*garg)--->  ->  ==krishna->setHealth(100);
    krishna->setScore(478);
    cout<<krishna->getScore()<<endl;

    // dynamic memry allocation in ll and to all pointer type 
} 