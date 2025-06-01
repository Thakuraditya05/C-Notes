// heaps visualisation 
// implementation 
// heapyify algorithm 
// heap sort 
// questions heaps 
// 




// key points 
// visualise like tree and implemnt like arr 
// each parent node hai i/2
// child node is either 2*i and 2*i+1


// data memeber  ko class ke under initilise nahi kr skte hai 
#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
// class MinHeap{
// public:
//     int arr[50];
//     // ye nahi kr ste hai --->agar koi cheeze initiliase krni hai to constracut ka use krna hpoga 
//     // vector<int>arr(50);
//     // int idx=1;
//     int top(){
//         return arr[1];
//     }
// };

// make class Minheap naam ki jisme array of 50 length ko ho and ek idx data member constructor se 
class MinHeap{
public:
// can also do abkle 
    // int arr[50];
    // int idx;
    // MinHeap(){
    //     idx=1;
    // }

// can also do abkle 
    vector<int>arr;
    int idx;
    MinHeap(int x){  //deciding capacity 
        idx=1;
        vector<int>a(x);
        arr=a;

        // for(int i=0;i<x;i++){
        //     arr.push_back(0);
        // }


    }




    int top(){
        return arr[1];
    }
    void push(int x){
        // sbse last me inter karo x ko 
        arr[idx]=x;
        int i=idx;
        idx++;

        // ab rearrange karna hai by swapping any chiled elemnt with parents elemnt if elemnt is greater 
        while(i!=1){
            int parents=i/2;
            if(arr[i]<arr[parents]){
                swap(arr[i],arr[parents]);
            }
            else break;
            i=parents;
        }
    }
        void pop(){
            idx--;
            arr[1]=arr[idx];
            // rearrangement 
            int i=1;
            while(true){
                int left=2*i;
                int right=2*i+1;
                if(left>idx-1)break;
                if(right>idx-1){
                    if(arr[i]>arr[left]){
                        swap(arr[i],arr[left]);
                        i=left;
                    }
                   break;
                }
                if(arr[left]<arr[right]){
                    if(arr[i]>arr[left]){
                        swap(arr[i],arr[left]);
                        i=left;
                    }
                    else break;
                }
                else{
                    if(arr[i]>arr[right]){
                        swap(arr[i],arr[right]);
                        i=right;
                    }
                    else break;
                }
            }
        }
// just w are printing our heaps 
        void display(){
            for(int i=1;i<=idx-1;i++){
                    cout<<arr[i]<<"  ";
            }
            cout<<endl;
        }
// printing size of tree
        int size(){
            return idx-1;
        }
    
};
int main(){
    // MinHeap pq;
    MinHeap pq(25);  //deciding capacity 
    pq.push(10);
    pq.push(20);
    pq.push(30);
    cout<<pq.top()<<"  "<<pq.size()<<"  "<<endl;
    pq.push(140);
    pq.pop();
    pq.push(600);
    pq.push(50);
    cout<<pq.top()<<"  "<<pq.size()<<"  "<<endl;
    pq.display();

}
