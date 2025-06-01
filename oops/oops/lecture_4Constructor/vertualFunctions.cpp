// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// // when a function of base class is redefined in its  derived class its called function overriding.

// // Assessing through Scope Resolution Operator;

// // Access through pointer;

// // Run Ttime  pe  basically function overrriding 
// // compile time pe function overloadding -->

// // parent pointer can store child address  this is tooo wierd just thing 
// // kyo ki child ke pass parents ki saari ki saari property aati hai 
// class Vehicle{ //base class // parent class
// public:
//     int tyreSize;
//     int engineSize;
//     int lights;
//     string companyName;
//     Vehicle(){
//         cout<<"bike ka constructor call hua"<<endl;
//     }

//     void showCompany(){
//         cout<<companyName<<endl;
//     }
//     //  void show(){
//     //     cout<<"vichhel ka show and bike ka show"<<endl;
//     // }

//     void show(){
//         cout<<"vichhel ka show and bike ka show"<<endl;
//     }
// };

// class Bike : public Vehicle{//base class // parent class
// public: 
//     int handlSize;

//     Bike(){
//         cout<<"bike constructor was called"<<endl;
//     }
//      void show(){
//         cout<<"bike ka show and bike ka show"<<endl;
//     }
// };


 
// // maan lo vishel ke under milegae nikalne ka function bana hau hai '
// // to hrr class ke liye alag alag formula haga na milage niaklane ke liye 

// int main(){
//         // compiler PoV-Vihile type 

//     Bike b;
//     Vehicle *a;
//     a=&b;// addressing pointer a ka hai but address store b ka ho raha hai jo ki Vehicles ka hai 
//     a->engineSize=012;
//     a->companyName;
//     a->lights;
//     a->showCompany();
//     a->tyreSize;
//     a->show();
//     // to yaha ek contradiction aagayi hai ki pointer Vehicle type  ka hai ya Bike type ka 
//     // comile time pe dekhenge tb pointer Vehile type ka hai 
//     // or agar Runtime dekhenge pointer Bike type ka hai kyo ki address bike type ka hai 
    
//     // iss point ko tackelle krne ke liye ki pinter bike type ka hai ya vehicle type ka hai Vertual function
// }



  
// we have seen waht is probleum with pointers and now its is time to take waht is its soln
// VERTUAL function
// virtual function kya krte hai ki wo make sure the corrcet function is called for an object, 
// regardless of the pointer used for calling it



#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Vehicle{ //base class // parent class
public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;
    Vehicle(){
        cout<<"bike ka constructor call hua"<<endl;
    }

    void showCompany(){
        cout<<companyName<<endl;
    }
   // compile time pe binding hoti hai 
//    but vertual ke scene me run time bibding hoti hai 
// yani abhi skip kr do function ko jb run time aayega tb dekh klenge ki kya krna hai bindinga ka 
// yani bhale hi pointer a ka ho but uske poiter pe b hai to b bind hoga run time pe 
    virtual void show(){
        cout<<"virtual void show vichhel ka show and bike ka show"<<endl;
    }
};

class Bike : public Vehicle{//base class // parent class
public: 
    int handlSize;

    Bike(){
        cout<<"bike constructor was called"<<endl;
    }
     void show(){
        cout<<"bike ka show and bike ka show"<<endl;
    }
};


int main(){
        // compiler PoV-Vihile type 

    // Bike b;
    // Vehicle *a;
    // a=&b;// addressing pointer a ka hai but address store b ka ho raha hai jo ki Vehicles ka hai 
    // a->engineSize=012;
    // a->companyName;
    // a->lights;
    // a->showCompany();
    // a->tyreSize;
    // a->show();

    Vehicle *a;
    a=new Bike; // ya ha  pe a ke under bike ko store kr rahe hai  
    a->show(); //
    a= new Vehicle; //  a ke under a ko hi store kiya gaya hai to koi dikkat nahi hogi 
    a->show(); //

    Vehicle e;
    Bike c;
    cout<<sizeof(e)<<endl;//with vertual 
    cout<<sizeof(c)<<endl;//without vertual


}