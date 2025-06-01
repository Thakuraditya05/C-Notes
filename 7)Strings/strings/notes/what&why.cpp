#include<iostream>
#include<string.h>
using namespace std;

void printStr(char str[],int num){
    for(int i=0;i<num;i++){
      cout<<str[i]<<" ";
     
   }
    cout<<endl; 
}
int main(){
    // "\0"--->null orr end of string kabhi bhi print nahi ha ye bhagwana ki trah hota hai isska exsitance to dikhayi deta 
   char str[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
   char str1[] = {'1', '5', '7', '9', 'e', 'f', 'g','\0'};
   char str2[] = {'h', 'i', 'j','\0', 'd', 'e', 'f', 'g'};
   printStr(str,7); //a b c d e f g
   printStr(str1,10);//1 5 7 9 e f g  a b
   printStr(str2,12); //h i j  d e f g a b c d 
   char ch='\0';
   cout<<&ch<<endl;


char ch='\0';
   cout<<&ch<<endl;



// This initializes the variable ch as a char with the value '\0' (the null character). The null character has a value of 0, but it is not the same as an uninitialized or "empty" character in terms of memory—it is simply a valid character value with zero ASCII code.
// The '\0' character is just a character with value 0, which is typically used to mark the end of a C-style string. However, it does not affect the output of &ch since &ch prints the memory address of the variable, not its value.
// '\0' has no visible representation.




    
      //   int arr[]={2,4,5,6,7,8,9,14};
      //   for(int i=0;i<8;i++){
      //       cout<<arr[i]<<" ";
      //   }
      //   cout<<endl;
      //   arr[3]=100; //this show in c++ array is mutable in nature
      //   for(int i=0;i<8;i++){
      //       cout<<arr[i]<<" ";
      //   }


   char str[5]="abcd";
   // char str2[5]='abcde'; //is wrong 
   char ch='\t'; // 9
   cout<<ch;
    char ch='\n'; //10
    char ch1='\0';//0
    
   cout<<"gugcsc"<<ch<<"   "<<"hellow"<<ch1<<endl;
   cout<<"gugcsc"<<"  " <<int(ch)<<"   "<<"hellow"<<"  "<<int(ch1)<<endl;
 




}