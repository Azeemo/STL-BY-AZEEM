#include<bits/stdc++.h>
include<stack>
using namespace std;
int main(){

stack<int> s; 
// decleration of stack
// follows the LIFO principle

// insertion in stack in done by the push operation
s.push(10);
s.push(20);
s.push(30);

// to get size of stack
cout<<s.size()<<endl;

// to get the top element of stack
cout<<s.top()<<endl;

// to remove the element 
//-> we can only remove the element folowing the LIFO
// -> it will remove the item from top
s.pop();

// in order to print a stack we can do like this

while(!s.empty()){
	cout<<s.top<<" ";
	s.pop();
}

// ALL THESE OPERATIONS ARE DONE IN  0(1)

//stack in internally implemented via deque
// and since it is implemented via other container 
// it is also called as CONTAINER ADAPTER

// QUEUE , PRIORITY QUEUE is also container as 
// it is implemented by other container and they act as interface

return 0;
}