
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
        vector<int> v;
       // vector for storing the span of all numbers

       stack<int> s;
       s.push(0);
       // inserting the first index

       v.push_back(1);
       // value of span of element at first index is 1 always

      // here in this approach we are finding the 
       // previous greater element let pge
       // if found out then span = index(pge)-index(element)
       // else it would be index(element)+1

for(int i=1;i<n;i++){
    while(s.empty()==false && price[s.top()]<=price[i]){
               s.pop();         
           }

      // here elemets will be stored in inc order

               int span = (s.empty())? (i+1) : (i-s.top());
               v.push_back(span);
               s.push(i);
       }
   
        return v; 
     }
};




//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i,a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        Solution obj;
        vector <int> s = obj.calculateSpan(a, n);
        
        for(i=0;i<n;i++)
        {
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}