#include<bits/stdc++.h>
using namespace std;
int main(){
pair<int,int> p1{1,12} , p2{2,12};
  cout<<(p1==p2)<<" ";
  // return true or 1 only when both the values are equal
  
  cout<<(p1!=p2)<<" ";
  // return true when any one the value is not equal
  
  cout<<(p1>p2)<<" ";
  // compares the first value and make decision .
  // if first vlues are smae it moves to comparision of second values
  cout<<(p2>p1)<<" ";
  
  return 0 ;
}
