#include<bits/stdc++.h>
// gfg question
#include<string>
using namespace std;
int main(){
	// here A/B operation is done 
	//  and if ans is 12.385 we need to return 3
// input string = 12.385
// output 3

	// string s;
	// cin>>s;
 //     string ans = "";
	// int pos = s.find('.');
 //    return (s.length-pos);

// ABOVE APPROACH NOT WORK AS INFINTE CASE WILL NOT BE HANDLES

// CORRECT APPROACH
	  if(A>=B) A%=B;
        unordered_map<int,int>m;
        while(A!=0){
            m[A]++;
            if(m[A]==2) cout<<"-1";
            A*=10;
            A%=B;
        }
       ]cout<< m.size();

return 0;
}