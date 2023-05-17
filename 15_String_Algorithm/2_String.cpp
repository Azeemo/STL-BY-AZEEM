#include<bits/stdc++.h>
using namespace std;
int main(){
// to check whether the substring is present in the string or not
	string str = "geeksforgeeks";
	int res = str.find("xyz")
	if (res==string::npos)
	{
		cout<<"not present"<<endl;
	}
	else{
		cout<<"first occurence at index "<<res<<endl;
	}


return 0;
}