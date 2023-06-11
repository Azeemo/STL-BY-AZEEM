#include<bits/stdc++.h>
using namespace std;
int main(){
 int arr1[3] = {3,1,2};
  char arr2[3]=['a','f','d']
 
  // sort the array in accordance of first array
  // output : f d a
    pair<int ,char> p[3];
  for(int i=0;i<3;i++)
  {
    p[i]={arr1[i],arr2[i]};
  }
  sort(arr1,arr1+3);
  
  for(int i=0;i<3;i++){
  cout<<p[i].second<<" ";
  }
  

return 0 ;
}
