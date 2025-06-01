// lets make the recusion 
// f(ind){
//     if(ind==0)return 0;
//     fs=f(ind-1)+abs(a[ind]-a[ind-1]);
//     if(ind>1)ss=f(ind-2)+abs(a[ind]-a[ind-2]);
//     if(ind>2)ss=f(ind-3)+abs(a[ind]-a[ind-3]);
//     ..
//     return min(mini of all);
// }

// similarly
// f(ind){
//     if(ind==0)return 0;
//     minSteps=INT_MAX;
//     for(j=1;j<K;j++){
//      if(ind-j>=0)
//      jump=f(ind-j)+abs(a[ind]-a[ind-j])
//      minsteps=min(minSteps,jump); 
//      }
//      return minStep;
// }

// memoization  
// tc=o(n*k)
// sc=o(n)+o(n) 

// int dp[n]
// dp[0]=0;
// for(i=1 <n i++){
//     minStep=INT_MAX;
//     for(j=1;j<k;J++){
//         if(i-j>=0){
//             jump=dp[i-j] + abs(a[ind]-a[ind-j]);
//             minSteps=min(minStep,jump)
//         }
//     }
//     dip[i]=minSteps
// }
// print(dp[n-1])

// now space optimised 
// o(n)to (k);
// by using vra




























































































































































