 // An anagram of a string is another string that contains the same characters, only the order of characters can be different.
 //   aFor example, act and tac are an anagram of each other.

#include <bits/stdc++.h>
using namespace std;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a==b) return true;
        else
          return false;
        
    }

};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
