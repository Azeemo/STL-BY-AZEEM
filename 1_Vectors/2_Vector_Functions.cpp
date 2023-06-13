#include<bits/stdc++.h>
using namespace std;
int main()
{  
  vector<int> v2 ={10,23,45,67};
  
  // popback function  in vector
  vector<int> v2 = {0,12,20,13};
  v.pop_back();
  
  /// FRONT AND BACK FUNCTION IN VECTOR
  cout<<v2.front();
  cout<<v2.back();
  
  // INSERT funnction in vector
  vector<int> v2 = {23,34,56,67};
  auto it = v2.insert(v2.begin(),100);
  // 100 23 34 56 67
  
  v2.insert(v2.begin()+2,200);
  // op : 100 23 200 34 56 67
  
  v2.insert(v2.begin(),2,300);
  //op : 300 300 100 23 200 34 56 67
  
  vector<int> v = {12,34,56,78}; 
  // insertion of vector in another vector 
  v2.insert(v2.begin(),v.begin(),v.begin()+2);
  // the first parameter is for poition where the vector will be inserted
  // the second parameter is for the amount of vector which will be inserted
  // here we are innserting a vector v into v2 from beginn to 2 in begin position of v2
  
  // ERASE FUNCTION
     vector<int> v3 = {12,34,55,23};
      v3.erase(v3.begin());
      // op  34 55 23
     v3.erase(v3.begin(),v3.end());
      // op : empty vector
  
  /// CLEAR FUNCTION
    vector<int> v3 {10,4,5,3};
     v3.clear();
  // v3.size() -> op = 0
  if(v3.empty()==true)
       cout<<"empty";
  else 
       cout<<"not empty" <<endl;
  
  /// RESIZE Function
  vector<int> v4{12,34,56,78};    
  vector<int> v5 = {12,34,56,78}; 
  // both decleration are same
  
  v4.resize(3);
  // 12 ,34,56
  v5.resize(5);  // extra value will be default as 0
  // 12 34 56 78 0
  
  v5.resize(8,100);  // all the extra values will be filled with 100
    // 12 34 56 78 0 100 100 100
  
  
  return 0 ;
}
