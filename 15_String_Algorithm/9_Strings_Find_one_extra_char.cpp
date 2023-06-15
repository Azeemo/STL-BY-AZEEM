#include<bits/stdc++.h>
using namespace std;
int main(){
  string s1,s2;
  cin>>s1>>s2;
  
  // GOOGLE ONSITE QUESTION

  // s1 = abcd , s2 = abcde
  // output = e

  // naive 0(n) approach 
  
   cout<<"MEATHOD 1"<<endl;

   sort(s1.begin(),s1.end());
   sort(s2.begin(),s2.end());
   
   int n = s1.size();
   int counte = 0;
   for(int i =0;i<n;i++){
	if(s1[i]!=s2[i]){
	  cout<< s2[i]<<endl;
	  counte+=1;
	}
   }
   if(counte==0){
      s2[n];
   }

//   total time complexity : 0(nlogn)


// meathod 2 : Counting meathod
// assuming it contains both uppercase & lowercase

cout<<"MEATHOD 2"<<endl;

int count[256] = {0};
// intialized a count array

for(char x: s2){
	count[x]++;
}
// increment the count corresponding to the value

for(char x :s1){
	count[x]--;
}

// decrement the count corresponding to element

// this approach can find all the uncommman characters
for (int i = 0; i < 256; ++i)
{
	if (count[i]==1)
	{
		     cout<<(char)i<<endl;
	}
}

/// MEATHOD 3 
// vai bitwise operators
cout<<"MEATHOD 3"<<endl;

int n1 = s1.length();
int res = 0;
for (int i = 0; i < n1; ++i)
{
	res=res^s1[i]^s2[i];
}

res = res^s2[n1]; // res will have binary rep of char
cout<<(char)res<<endl;

return 0;
}
