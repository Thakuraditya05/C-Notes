// to reach nth stairs so how many ways u can do the same 

//  if u master recursuion u can master dp 

// (1)try to represent the probleum in terms of index 
// (2) do all stuffs on that index according o the probleum  statetment 
// (3) if(count all ways) then sum of all stuffs 
// (4) if(find minimum) then minimum of all stuffs 
// (5) if(find mmaximum) then maximise all stuffs
// then we are able to right memoization then tabular form then to space reduction 

// f(n){
//     if(n==0)return 1;
//     if(n==1)return 2;
//     left=f(n-1);
//     right=f(n-2);
//     return left+right;
// }
