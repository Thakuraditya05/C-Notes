//(aba,"")==> issk eliye same probleum solution dikkt de raha hai to isske liye ek kaam kr skte hai wo ye ki 
// ek unodered set  bana le hrr recursive call ke liye 
// (aba,"") yaha pe set{a,b,c}-->{a}(aba,1),()
// aur   uss recusive level pe jo bhi set me pada rahega uske liye call execute mt krna 
// 

#include "../backtracking.h";


void permutBacktracking(string &str,int i){  
    if(i==str.size()-1){
        cout<<str<<endl;
        return;
    }
    unordered_set<char>s; // dekho set bana liye beafore recursive call 
    for(int idx=0;idx<str.size();idx++){
        if(s.count(str[idx]))continue;
        s.insert(str[idx]);
        swap(str[idx],str[i]);
        permutBacktracking(str,i+1);
        swap(str[idx],str[i]);   // ye wala step backtracking ka hai ki cjanges to kr do but if wo call complete ho jaye to jo chnages pahel kiye tha wodubara se original form me convert ho jaye  ,,,,,, do dry run  without this and do with this(i.e without this we will find char seqnace probleum  )
    // 
    }
}








