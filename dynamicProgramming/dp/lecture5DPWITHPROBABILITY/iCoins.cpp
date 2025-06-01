// https://atcoder.jp/contests/dp/tasks/dp_i


// most of time me probability me aise hoga ki x ke aane ke total ways (yani depandend state ) me multiply by unki probanility 


// probability ki heads comes more than tails
// baised coins 
// total outcome 8 but head> tail (n+1/2) (se jada coins hone chiye )
// The probability of each case where we have more heads than tails is as follows
// (Coin1,Coin2,Coin3)=(Head,Head,Head) is      // 0.3×0.6×0.8=0.144
// (Coin1,Coin2,Coin3)=(Tail,Head,Head) is      // 0.7×0.6×0.8=0.336
// (Coin1,Coin2,Coin3)=(Head,Tail,Head) is      // 0.3×0.4×0.8=0.096;
// (Coin1,Coin2,Coin3)=(Head,Head,Tail) is      // 0.3×0.6×0.2=0.036.
// Thus, the probability of having more heads than tails is      // 0.144+0.336+0.096+0.036=0.612.

// f(p i x )= kya probabilty hogi  x heads aane ki if 0 se i coin tossed kiye gaye hai  
// ith coins me ya to tail aaskta hai ya to head aaskta hai 


// ith coin tossed ye  tail if head then multiply with its probability 
// if ith gives tail event ===> we will multiply tail event with its probabilty 

// c0 c1 c2


// base case x==0 yani mujhe jitne head chahiye the mujhe mil gaye hai 
// to uske baad return 1 karo kyo ki probabilty 1ho gayi hai 
// if i==-1 coins khatam ho gaye hai return 0 kyo ki coin khatam ho gaye to aur head chahiye to probablity of head is zero 


// binary reseach on real number 
// dp[i][j]>-0.9
// do decimal value ko compare krna crtical hi jata hai ya galat ho jata hai critical precision issue create hote hai 
// 
// 

// sare dp with probability wale scene me 
// pana recurance relation banayenge ek desidred event (jaise head aane ke) ka function ya chance create karenge and usse fir probabiltye se multiply kr denge  
// (event of head outcome)xprobabilty + (event of tail  outcome)x(Probability)




























































































