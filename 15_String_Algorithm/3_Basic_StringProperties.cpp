#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin ,s);
// it is used to take a string  with spaces

// COMPARISION OPERATOR IN strings

string s1 = "abc";
string s2 = "xyz";
// here comparision will be done lexographically
// each char by char will be compared

if (s1==s2)
{
	cout<<"equal"<<endl;
}
else if(s1>s2){
cout<<"greater"<<endl;
}
else{
	cout<<"smaller"<<endl;
}

/// types of ITERATION ON STRINGS

for (int i = 0; i < str.length(); ++i)
{
	/* code */
}

for(char x:str){
//
}

for(auto it = sr.begin();it!=str.end();it++){
/// 
}

return 0;
}