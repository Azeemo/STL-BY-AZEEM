#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Solution {
  public:
    string postToPre(string s) 
    {
           int n = s.length();
           // length of string
           
           stack<string>  st; // initialized a stack
           
           for(int i=0;i<n;i++){
               
     //The isalnum() method returns True if all the characters are alphanumeric,
     //meaning alphabet letter (a-z) and numbers (0-9).
     //Example of characters that are not alphanumeric: (space) !#%&?
               if(isalnum(s[i])){
                   string curr;
                   curr=s[i];
                   st.push(curr);
               }
               
               else{
                   string s1 = st.top();
                   st.pop();
                   string s2 = st.top();
                   st.pop();
                   string curr = s1+s2+s[i];
                   st.push(curr);
               }
           }
           
        //   return st.top();
          string x = st.top();
          reverse(x.begin(),x.end());
          return x;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;

        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
