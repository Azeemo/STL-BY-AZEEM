
#include<bits/stdc++.h> 
using namespace std; 

class Solution{
    public:
    void clonestack(stack<int> st, stack<int>& cloned)
    {
        int n = st.size();
        for(int i=0;i<n;i++){
            int val = 0;
            while(st.size()>1){
                cloned.push(st.top());
                st.pop();
            }
            val = st.top(); // this is done in order to get the bottom value of the stack
            st.pop();
            while(cloned.size()>i){
                st.push(cloned.top());
                cloned.pop();
                }
                
            cloned.push(val);
        }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        stack<int> st;
        vector<int> copy;
        for(int i = 0; i < N; i++){
            cin >> arr[i];
            st.push(arr[i]);
            copy.push_back(arr[i]);
        }
        
        reverse(copy.begin(), copy.end());
        
        Solution ob;
        stack<int> cloned;
        ob.clonestack(st,cloned);
        vector<int> check;
        while(cloned.size())
        {
            check.push_back(cloned.top());
            cloned.pop();
        }
        
        int flag = 0;
        if(check!=copy)
            flag = 1;
        
        cout<<1-flag<<endl;
    }
    return 0; 
}
