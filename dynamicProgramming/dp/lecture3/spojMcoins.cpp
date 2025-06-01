// https://www.spoj.com/problems/MCOINS/

// state of subvariable sirf ek ke karan change ho raha hai jo ki n hai
// dp(i)=!(dp(i-1) && dp(i-k) && dp(i-l)) 
// ith ke liye winning state ka matlab usske aage wali saari loosing satate honi chahiye 

// agar dp[i-1] 
// agar dp[i-k]==exists na kare to usske liye ternary operature se alag se case handle krne padenge 
// same for dp[i-l]==
// ek baad yaad rakhna 0 and logical operature ko influence krta hai but 1 and opreture ko influence nahi krta hai 
