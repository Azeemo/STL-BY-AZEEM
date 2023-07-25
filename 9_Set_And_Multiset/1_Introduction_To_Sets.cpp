// set is used to store data in a sorted format
// whenever you traverse the set it will come out in a sorted format
//It also ignores the duplicate values

#include<bits/stdc++.h>
using namespace std;
int main(){
set<int> s;
  s.insert(5);
 s.insert(10);
   s.insert(2);
s.insert(10);
  
  for(auto x :s){
  cout<<x<<" ";     /// OUTPUT  :  2 5 10
  }

  //to create a set of sorted in reverse order 
  // create like this set<int,greater <int> >s;

  //to find whether  an element is in the set or not

  auto it = s.find(12);
  if(it==s.end()){
    cout<<"Not pRESENT"<<endl;
  }
  else{
    cout<<"Present"<<endl;
  }
  // order to print all the elements after the founded element 
  while(it!=s.end()){
  cout<<*it<<" ";
  }
  
  /// in oder to clear he set use s.clear() in the built function

  // count function is used to return the number of occurrences of elements in the set
  //Since the set does not contain duplicates it can also be used as a FIND function

  if(s.count(10)){
    cout<<"FOUND"<<endl;
  }
  else{
    cout<<"NOT FOUND "<<endl;
  }

// erase function is used to delete a set of elements in the set
  set<int> s1;
  s1.insert(1);
  s1.insert(23);
  s1.insert(21);
  auto it = s.find(21);
  s.erase(it); // it will remove 21
  s.erase(it,s.end()); // it will remove till end from 21
  
  
///  UPPER BOUND AND LOWER BOUND FUNCTION
  set<int> s2;
  s.insert(5);
  s.insert(20);
  s.insert(10);
  //stored 5 10 20

    // LOWER BOUND
  //In the Lower bound if an element is present then it will return an iterator to that element
  //If the element is not present then it returns an iterator to the next greater element 
  //If the element is greater than the greatest element of the set then s.end() will be returned

  auto it = s.lower(6)
  if(it!=s.end()){
    cout<<*it<<" ";    // 10
  }
  else{
    cout<<"given element is greater than greatest element"<<endl;
  }

  // UPPER BOUND
  //In the Lower bound if an element is present then it will return an iterator to the next greater  element
  //If the element is not present then it returns an iterator to the next greater element 
  //If the element is greater than the greatest element of the set then s.end() will be returned

auto it = s.upper(5)
  if(it!=s.end()){
    cout<<*it<<" ";  // 10
  }
  else{ 
    cout<<"given element is greater than greatest element"<<endl;
  }

  // APPLICATIONS 
 -> SORTED STREAM OF DATA 
  -> DOUBLY ENDED PRIORITY QUEUE
  
}
