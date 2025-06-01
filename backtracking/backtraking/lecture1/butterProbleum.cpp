#include "../backtracking.h";

// (abc,"")-->(bc,a),(ac,b),(ab,c)--->(bc,a),(ac,b),(ab,c)
// hrr chater ko ek ek baar muka mil raha hai aage aane ka  
// fir ussk pecche and 

// (bc,a),==>bc ki saari permutation baata raha hai orr bol raha hai ki 'a' as the 1st charecter banega 
// ek baar b ko pahla charecter banne ka mauka denge aur ek baar c ko mauka denge aur call karnege 
// (c,ab) 


 

void permutations(string in,string op){  
    if(in.size()==0){
        cout<<op<<endl;
        return;
    }
    for(int i=0;i<in.size();i++){
        char ch=in[i];
        string left=in.substr();
        string right=in.substr(i+1);
        string ros=left+right;
        permutations(ros,op+ch);
    }

}


// EK TO PASS BY COPY HO RAHA HAI  evry time new string is formed 
// pass by refrenace nahi kr skte hai kyo ki baar baar string update hoti ja rahi hai 
// kyo ki original string me changes  ho ja rahe the --->if chages kkrte smay forward direction me changes to ho jaye 
// but reverse me wahi changes revert ho jaye 
// 

void permutBacktracking(string &str,int i){  
    if(i==str.size()-1){
        cout<<str<<endl;
        return;
    }
// (abc, i=0)=>f(str,i)==>generat permutation of string from str(i,n)
    for(int idx=0;idx<str.size();idx++){
        swap(str[idx],str[i]);
        permutBacktracking(str,i+1);
        swap(str[idx],str[i]);   // ye wala step backtracking ka hai ki cjanges to kr do but if wo call complete ho jaye to jo chnages pahel kiye tha wodubara se original form me convert ho jaye  ,,,,,, do dry run  without this and do with this(i.e without this we will find char seqnace probleum  )
    }

}


int main(){
    permutations("abc","");
    cout<<endl;
    string str= "abc";
    permutBacktracking(str,0);
}





