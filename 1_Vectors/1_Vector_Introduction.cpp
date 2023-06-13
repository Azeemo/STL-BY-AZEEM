#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> v;
  // how to insert in vecor
   v.push_back(10);
    v.push_back(120);
    v.push_back(30);
    v.push_back(40);
  
  // print a vector
  for(auto x :v){
  cout<<x<<" ";
  } 
  
  // print a vector
  for(auto it = v.begin();it!=v.end();it++){
      cout<<*it<<" ";
  }
  
  // in order to create a vector of size n having x values 
  vector<int> v1(n,x);
  
 // copy an array into vector
  vector<int> v(arr,arr+n);
  
  //  for reverse iterating the vector
  for(auto  it =v.begin();it!=v.end();it++){
  cout<<*it<<" ";
  }
  
  
  
  return 0 ;
}
