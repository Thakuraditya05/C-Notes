#include<bits/stdc++.h>
using namespace std;
class Cricketer{
public:    
    string name;
    int age;
    int noOfTextMatches;
    int averageScore;
    // Bat bat[20];
};

// oops me getter setter use krma important hai 
int main(){
     Cricketer virat;
     Cricketer Dhoni;
     

    //  virat.name='virat';
    //  virat.age=30;
    //  virat.averageScore=57;
    //  virat.noOfTextMatches=100;

    //  Dhoni.name='Dhoni';
    //  Dhoni.age=4;
    //  Dhoni.averageScore=50;
    //  Dhoni.noOfTextMatches=90;

    // Cricketer cricketer[2]={virat,Dhoni};
    // for(int i=0;i<2;i++){
    //     cout<<cricketer[i].name<<endl;
    //     cout<<cricketer[i].age<<endl;
    //     cout<<cricketer[i].noOfTextMatches<<endl;
    //     cout<<cricketer[i].averageScore<<endl;
    // }


    // dynamically 
    vector<Cricketer> cricketers;
    for(int i=0;i<2;i++){
        Cricketer *cricketer=new Cricketer;
        cricketer->age=16;
        // .
        // .
        // ..
        // cin>>;
        cricketers.push_back(*cricketer); 
    }

} 