// we are given vectors
// roll no -> 101 , 108 , 103 , 105
// marks -> 70,80,40,90

/*  output 
 105    90
 108    80
 101    70
 103    40
*/
#include<bits/stdc++.h>
using namepsace std;
void mycmp(pair<int,int>p1,pair<int,int>p2){
return p1.second>p2.second;
}
int main(){
  vector<pair<int,int>> v;
  for(int i=0;i<4;i++){
  v.push_back({rollno[i],marks[i]});
  }
 
  // sorts in accordance of the first value of pair
//    sort(v.begin(),v.end());
  // so the above statement will sort it in accordance of roll no which we dont wnt
  // so what we want
  
 // WE WANT IT TO BE SORTED IN DECREASING ORDER OF THEIR MARKS
  
  sort(v.begin(),v.end(),mycmp);
  
  for(int i=0;i<4;i++){
  cout<<v[i].first<<" "v[i].second<<endl;
  }
  
return 0;
}
