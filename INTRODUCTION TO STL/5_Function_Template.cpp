#include<bits/stdc++.h>
using namespace std;
template<typename T , int limit>
T arrmax(T arr , int n){
	if(n>limit){
		return -1;
	}

	T res = arr[0];
	for(int i=1;i<n;i++){
		if(res>arr[i]){
			res = arr[i];
		}
	}
	return res;
}
int main(){
int arr[] = {1,2,3,5};
cout<<arrmax<int,3>(arr,4)<<endl;

float arr2[] = {3.2,2.45,2.6};
cout<<arrmac<float,2>(arr2,3)<<endl;
// this will throw -1

return 0;
}