#include<bits/stdc++.h>
using namespace std;
template<typename T>
T mymax(T x , T y)
{
	return (x>y)? x:y;
}
int main(){

// the main concept here is write code once and use for any datatype
// it is similar to MACROS but in this TYPE CHECKING IS DONE

// two types 
	//-> function template :
	// sort , linear_search
	// binary search

	//-> class template :
	// stack , queue ,deque
cout<<mymax(3,4)<<endl;
cout<<mymax<int>(-3,-6)<<endl;

cout<<mymax('c','d')<<endl; // on basis of ascii value

// mymax(3,3.4) // wont work as datatype is not same

return 0;
}