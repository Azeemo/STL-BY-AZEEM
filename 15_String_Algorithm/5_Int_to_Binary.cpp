#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
/// meathod 1
// entering the number which we want to convert in binary
  int ans = 0, remainder, i = 0;

    // Until the value of n becomes 0.
    while(n != 0){
        remainder = n % 10;    
        ans += remainder * pow(2, i);
        i++; 

        // Remove the rightmost digit of n.
        n = n / 10;
    }
cout<<"answer by meathod 1 "<<ans<<endl;

// meathod 2 to convert integer into BINARY STRING

    	int m = (int)(log2(number));

	// binary output
	// using the inbuilt function
	 string s = bitset<64>(number).to_string().substr(64 - m - 1);

cout<<"answer by meathod 2"<<s<<endl;


return 0;
}