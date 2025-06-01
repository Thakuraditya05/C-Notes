#include<bits/stdc++.h>
using namespace std;
 // one advantage of arr vver vector is that arr is automatic pass by referenec

int main(){
    char str[3]={'a','d','c'}; // array of chhar
    int arr[]={1,2,3}; // array int
    int* ptr=arr;// ptr me address store kr rahe hai 
//error     int* ptr2=&arr;// ptr2 me address store kr rahe hai 
    int* ptr2=&arr[0];
    // int* ptr3=arr[0];// not possible jaie int me address store nahi kr skte waise poitr type me integer store nahi kkr ste 

// 
    for(int i=0;i<3;i++){    // 0 1 2  
        cout<<(*ptr)<<" "<<endl; // ptr me jo bhi address store hoga usski adrress pe jayega uskki value print kr dega
        cout<<(ptr)<<" "<<endl; 
        ptr++; // address +1 ho jayega 
        // int pointer jo hote hai +1 hone pr +4 bite pe jump kr jate hai 
        // char type me char pointers +1 hoone pr 1 bite se pus hhote hai keval 
    }

}   