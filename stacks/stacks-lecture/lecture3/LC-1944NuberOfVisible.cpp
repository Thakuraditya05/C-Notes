// ki next greatest element jaise socho and ulta traverse  karo and ek elemnt jitne pop kara skta hai stacks me se agar usse CHOTE elemnt hai to 
// to utne count badhate jaunga 
// pop ans push 
// stack me agar ek elemnet usse bada hai to sirf ans one hai 
// count of pop ko dekha gay hai 
class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n,0);
        stack<int>st;
        st.push(arr[n-1]);
        ans[n-1]=0;
        
        for(int i=n-2;i>=0;i--){
            int count=0;
            // pop with count 
            while(st.size()>0&&arr[i]>st.top()){
                st.pop();
                count++;
            }
            if(st.size()!=0)count++;//vvimp
            ans[i]=count;
            // push
            st.push(arr[i]);

        }
        return ans;
    }
};