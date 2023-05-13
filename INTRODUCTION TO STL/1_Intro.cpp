// STL -> Standard Template Library
// It is a collection of built in fucntions and meathods
// focused manely on cp problems

// Containers
// simple -> vector , forward list , list
// container adapter -> stack , queue , priority queue
// algorithm -> binary search , find, reverse
// associative -> map , set, unordered_set, unordered_map

// stl takes data types as arguments

//ITERATORS:they give you the addrsss of elements present in container
//  access and modify the elements 
// begin() -> for access first element 
// end( ) -> to access the element next to last element

// SAMPLE PROGRAM
 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 int arr[]= {1,5,2,8};
 sort(arr,arr+4);
 for(int i=0;i<n;i++)
 {
 	cout<<arr[i]<<" ";
 }
 if (binary_search(arr,arr+4,8))
 {
 	cout<<"present"<<endl;
 }
 else{
 	cout<<"Not present"<<endl;
 }
 return 0 ;
}







 
 return 0;
 }
