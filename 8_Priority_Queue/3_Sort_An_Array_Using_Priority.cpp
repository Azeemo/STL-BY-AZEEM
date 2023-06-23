#include<bits/stdc++.h>
using namespace std;
int main()
{

//sort an array using priority queue 

int arr[5]={12,45,23,67,23};

priority_queue<int> pq(arr,arr+5);

// to sort the elements from greater to smaller elements
 while(pq.empty()==false){
    cout<<pq.top()<<" ";
    pq.pop();
 }
cout<<endl;
// to sort the elements from smaller to greater elements
for(int i=0;i<5;i++){
    arr[i]=-arr[i];
}

priority_queue<int> pq1(arr,arr+5);
 while(pq1.empty()==false){
    cout<<(-pq1.top())<<" ";
    pq1.pop();
 }


return 0 ;
}
