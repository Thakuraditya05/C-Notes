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

};
int main(){
    Bike tvs(12,100);
    Bike honda(13,50);
    Bike platina(15,350);

    cout<<tvs.tyreSize;



}