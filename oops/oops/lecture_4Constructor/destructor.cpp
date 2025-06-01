#include<iostream>
#include<vector>
#include<string>


using namespace std;

class Bike{
public: 
    int tyreSize;
    int engineSize;
// just constructor ka kaam ki initialization ka dekhne waale hai 
// just value intisialise kr raha hai 
    Bike (int tyreSize, int engineSize){
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
        cout<<"constructor Call hua"<<endl;
    }

// lets free  fire ke game me jb koi bnda offline ho jata hai to usko memry stacks se delete krna padega 
// uska memry stacke banaya tha constructor ne but delete kon karega destructor delete karega but jo wo out off the scoppe ho jayega 
    ~Bike(){
        cout<<"destructor is been called";
    }
// jb array khud ka bante hai ya dynamically koi memory allocate krta hai to distructor se gfree krwa lete hai 

};
int main(){
    Bike tvs(12,100);
    Bike honda(13,50);
    Bike platina(15,350);

    bool flag=true;
    if(flag==true){
        Bike bmw(20,200);
        cout<<bmw.engineSize<<"  "<<bmw.tyreSize<<endl;
    }
    

    cout<<tvs.tyreSize<<"  "<<tvs.engineSize<<endl;
    cout<<honda.tyreSize<<"  "<<honda.engineSize<<endl;
    




}