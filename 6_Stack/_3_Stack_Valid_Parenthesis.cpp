#include<bits/stdc++.h>
using namespace std;
    bool isValid(string x) {
       {
              int n = x.size();
              if(n%2!=0){
                  return false;
              }
              
         stack<int> st;
         
         for(int i=0; i<n; i++){
             if(st.empty()){
                 st.push(x[i]);
             }
             
         else if((x[i] == ']' && st.top() == '[')||
            (x[i] == '}' && st.top() == '{') || (x[i] == ')' 
                && st.top() == '('))
             {
                 st.pop();
             }
             
             else{
                 st.push(x[i]);
             }
         }
         
         if(st.empty()){
             return true;
         }
         else{
             return false;
         }
    }
    }
  int main()
  {
       string expression;
       cin>>expression;

       if (isValid(expression))
       {
           cout<<"valid expression"<<endl;
       }
       else{
        cout<<"invalid expression"<<endl;
       }

    return 0 ;
  }