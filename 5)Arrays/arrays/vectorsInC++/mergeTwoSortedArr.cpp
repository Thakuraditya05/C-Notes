#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// class Solution {
// public:
//     void merge(vector<int>& v1, int n, vector<int>& v2, int m) {
//         vector<int> v(n + m);
//         int i = 0, j = 0, k = 0;
//         // Merge the two arrays
//         while (i < n && j < m) {
//             if (v1[i] < v2[j]) {
//                 v[k++] = v1[i++];
//             } else {
//                 v[k++] = v2[j++];
//             }
//         }
//         // If there are remaining elements in v1
//         while (i < n) {
//             v[k++] = v1[i++];
//         }
//         // If there are remaining elements in v2
//         while (j < m) {
//             v[k++] = v2[j++];
//         }
//         // Copy the merged array back into v1
//         for (int i = 0; i < n + m; i++) {
//             v1[i] = v[i];
//         }
//     }
// };


 

int main(){
    
    vector<int>v1={1,2,3};
    vector<int>v2={2,5,6};
    int n=v1.size();
    int m=v2.size();
    vector<int>v(n+m);
    int i=0;
    int j=0;
    int k=0;
     
    while((i<=n||j<=m)){
            if(v1[i]>v2[j]){
                v[k]=v1[i];
                i++;
                k++;
            }

            if(v1[i]<v2[j]){
                v[k]=v2[j];
                j++;
                k++;
            }

            if(v1[i]==v2[j]){
                v[k]=v1[i];
                i++;
                k++;
                v[k]=v1[j];
                k++;
                j++;
                
            }
        }
  
        while(k==(n+m)){
            if(i==n){
                v[k]=v2[j];
                k++;
                j++;
            }
            if(j==m){
                v[k]=v1[i];
                k++;
                i++;
            }

        }
     printVector(v);
}

