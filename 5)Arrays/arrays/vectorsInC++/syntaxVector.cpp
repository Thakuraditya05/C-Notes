// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int>&v){
    cout<<v.size()<<" "<<"just start printing"<<endl;
         for(int i=0;i<v.size();i++){
           cout<<v[i]<<"  "<<i<<endl; 
        }

}
int main(){
        //  vector<int>v(5); // v naam ka vector of size 5 bn jayega  
        //  cout<<&v<<endl; //  in array cout<<arr;
        //  //  by default value zero stored hoti hai vectors me 
        // printVector(v);
        // v.push_back(5);
        // v.push_back(6);
        // v.push_back(7);
        // v.push_back(1);
        // v.push_back(9);
        // v.push_back(4);
        // printVector(v);

        // baisc opretation on vectors

        vector<int>v;//no need to mention 
        cout<<v.size()<<" "<<endl;//0
        v.push_back(5);
        v[0]=100; //modificaion and printingr kr liye use krte hai 
        v.push_back(6); // // inserying
        cout<<v.size()<<" "<<endl;//2
        cout<<v[0]<<endl;//100
        cout<<v[1]<<endl;//6




} 

