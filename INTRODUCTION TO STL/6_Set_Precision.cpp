#include<bits/stdc++.h>
using namespace std;
int main()
{
//   Explanation :: actually why we are using fixed ?

// when we are using fixed the output gives the trailing values upto the default precision or custom precision.

// Eg::  float a=22.3434343434.

// cout<<fixed;

// cout<<a; // output: 22.343434 only 6 digit after the dot is considered as default precision for float is 6.

// if we set to setprecision(3)// here only 3 digit after the dot is considered.

// cout<<a;// output;22.343.
  float ans = a/b;
    
    cout<<ans<<" ";
  // if we use only ficed then it will give point values to 6 decimal as it is fixed for float
    cout<<fixed<< setprecision(3) <<ans<<endl;
    
    cout<<endl;
  
  
  
  
  
}
