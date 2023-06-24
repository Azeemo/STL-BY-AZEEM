/*
 A pangram is a sentence containing every letter in the English Alphabet (either lowercase or uppercase or both).
 For example, we say the letter A is present in the string if either 'a' is present or 'A' is present.
*/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string &str) {
        bool visited[26]={0}; // created a bool array of 26 characters as there are 26 alphabets
        int n = str.length();
        
        for(int i=0;i<n;i++){
            char x = str[i];
            if(x>='a'&& x<='z' ){
                visited[x-'a']=true;  // subtracting by a will give us the index of x in the range of 0 to 26
            }
             if(x>='A'&& x<='Z' ){
                visited[x-'A']=true;
            }
        }
        
        for(int i=0;i<26;i++){
            if(visited[i]==false){
                return false;
            }
        }
        return true;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string str;
        getline(cin, str);
        Solution obj;
        if (obj.checkPangram(str) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}
