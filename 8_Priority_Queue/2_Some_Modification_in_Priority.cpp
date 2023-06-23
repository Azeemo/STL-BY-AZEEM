#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){

// priority queue is a type of data structure that uses
// which uses the concept of heap for creation purpose
// but takes vector as an underlying container for creation

  priority_queue<int,vector<int>,greater<int>> pq;
 // syntax for creating priority queue with minimum element at the top

// MEATHOD 1 FOR INSERTION
  pq.push(10);
  pq.push(15);
  pq.push(5);

// MEATHOD 2 FOR INSERTION
//  IN ORDER TO PUSH AN ARRAY/VECTOR INTO THE PRIORITY QUEUE 
// we can use the syntax : priority_queue<int> pq1 (arr,arr+n);

// AMONG TO THE SECOND ONE IS BETTER ON TERMS OF TIME COMPLEXITY
// THE OTHER IS A BIT COSTLIER

  cout<<pq.size()<<endl;
  // op = 3 

  cout<<pq.top()<<" ";
   // op = 5

// this will result in giving answer but in reverse sorted format
  while(pq.empty()==false){
    cout<<pq.top()<<" ";
    pq.pop();
  }

// complexity analysis 
// push / pop -> log n
// size / top / empty -> o(1)

////////////////////////////////////////////////////////////////////////

// Alternative meathod to create a queue with min at top
int arr1[] = { 10 , 5 ,15};

// multiply all elements by -1 
for(int i=0;i<3;i++){
    arr1[i]=-arr1[i];
}

priority_queue<int> pq1(arr1,arr1+3);

while(pq1.empty()==false){
    cout<<(-pq1.top())<<" ";
    pq1.pop();
}

    return 0;
}
