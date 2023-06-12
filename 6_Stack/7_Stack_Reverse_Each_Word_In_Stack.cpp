#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:

    string reverseWords (string s)
    {
        stack <char> stk;
        for(auto x:s){
            stk.push(x);
        }
        vector<string> v;
        string str = "";
        int count =1;
        for(int i=0;i<s.length();i++){
            if(stk.top()=='.'){
                v.push_back(str);
                v.push_back(".");
                str = "";
            }
            else{
            str += stk.top();
            }
            stk.pop();
        }
      
        v.push_back(str);
        reverse(v.begin(),v.end());
       string s1="";
       for(int i=0;i<v.size();i++){
           s1+=v[i];
       }
         return s1;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}
