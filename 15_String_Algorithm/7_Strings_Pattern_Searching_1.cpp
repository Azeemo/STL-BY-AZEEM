#include<bits/stdc++.h>
using namespace std;

//this is used to find all the occurence of a string in string
// in this process we are making all the possible
// substring of length txt from pat and comparing with txt

class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            vector<int> v;
            for(int i=0;i<txt.length();i++){
            if(txt.substr(i,pat.length())==pat){
               v.push_back(i+1);
            }
        }
        return v;
        }
     
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) 
                {cout << i << " ";}
            cout << endl;
        }
    }
    return 0;
}