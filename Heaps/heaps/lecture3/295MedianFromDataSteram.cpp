#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// 50:35
//    55:33

// kiski bhi time pr median batana hai uss time pe 
6 1 2 4 2 1 3 8 1
stream -> median 
6->6
6 1 ->3.5
6 1 2--> 2
...
...
...
..
class MedianFinder {
    public:
        vector<int>v;
        MedianFinder() {
            
        }
        
        void addNum(int num) {
            v.push_back(num);
            sort(v.begin(),v.end());
        }
        
        double findMedian() {
            int n=v.size();
            if(n%2!=0)return v[n/2];
            else return (v[n/2]+v[n/2-1])/2.0;
         
        }
    };

ye wala simple tarik hai push krte jaao and turant sort karo 


orr jb median find krne ko bola jaae to findMedian(){}
to sizze nikalo if odd to medial simpla beech ka element and 
iff size eqal to event then median dusara kuch 
ye time complexity bahut jada hogi 


case 2   
// dusara kaam ye kr skte hai ki typical insertion sort bana de 
class MedianFinder {
    public:
        vector<int>v;
        MedianFinder() {
            
        }
        void addNum(int num) {
            v.push_back(num);
            // sort(v.begin(),v.end());
            int i=v.size();
            while(i>=1 && v[i]<v[i-1]){
                swap(v[i],v[i-1]);
                i--;
            }
        }
        double findMedian() {
            int n=v.size();
            if(n%2!=0)return v[n/2];
            else return (v[n/2]+v[n/2-1])/2.0;
        }
    };
// isse time complexity thodi si bs sahi ho jayegi but TLE tabhi dega 



case 3 
median sirf beech ka elemnt hota hai na (6 1 2 4 2 1 3 8 5 )
yani n-1/2 elemnt smaller and n-1/2 elemnt larger (3 is median 4 number chote honge(1221) and 4 number bade honge(6485)  )
chalo do heap bana lete hai  



for the case of even 
6 1 2  2 1 8 5 
1 2 2 1 isska max elemnt ||6 4 8 5  innka min elemnt ====> max+ min/2 (ye mmedian hoga )  elemnt will give 
ye max and min hi hepas ka sense develop kr raha hai 




// chalo min heap bana lo and ek max heap bana lo 
// maxheap->left
// minheap ko right
// 1st elemnt always maxHeap(left)
// all  ele of left <=all the elemnt of right 
// size should be similar or 1 ka differnace ho 
// if median(in case of odd  top  of maxHeap and in case of even eveg of two ) se bada hai to  elemnt put in min heap 
// if meadian se chota hai to max heap 

if 4 is smaller than top.mxHeap ans will be no ==> to min heap me daal do 
agar top wale elemnt se chhota hai max heap ke tohi max heap me daalo  nahi to min heap me daalo
if min heap ka size jada ho jata haiek ke diffrance se bhi jada to bhi jabardasti dusare wale min heap me daal dena 
jisme jada elemnt honge uska top hi median hoga if equal elemnt honge to dono ke top yani maxx and min ka avg 
yaad rakhna ki jb tk elemnt maxheap se km ka hai to max heap me push kare nahi to uske baad min heap (yani bbade paaye jane pe ) me push kare 
6 |
16 | -->1|6
