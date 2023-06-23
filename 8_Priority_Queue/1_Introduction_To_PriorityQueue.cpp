#include<bits/stdc++.h>
#include<queue>
// in c++ priority queue is implementd via heap data structure
using namespace std;
// the elements are being stored via the MAX HEAP , acc to which
// the max element will be at the top and smaller elements will be its child


int main(){
  priority_queue<int> pq;
  pq.push(10);
  pq.push(15);
  pq.push(5);

  cout<<pq.size()<<endl;
  // op = 3 

  cout<<pq.top<<" ";
   // op = 15

// by this you will get the elements in the sorted order
  while(pq.empty()==false){
    cout<<pq.top()<<" ";
    pq.pop();
  }
  
// top will always give you the top element 
// and if you did pop then current max gets removed and next greater is added





    return 0;
}
