#include<bits/stdc++.h>
using namespace std;
int main(){
// initialization 1
	vector<int> v = {10,20,30,40,50};
	// dynamic size Array

	vector<int>:: iterator i =v.begin();
	// general syntax : datatype<int> :: iterator i;

    // Alternative : use auto it

  // -> // There is a difference between POINTERS AND ITERATTORS
      // -> we cant do pointer arithmetic on the pointers
              // /  it  = it +5 // allowed in pointers
                /// it = it +5 not allowed in iterator (it ++ allow)
	cout<<(*i)<<" "<<endl;
	// derefrence to get the value

	i++;

	cout<<(*i)<<" "<<endl;

///// NOW PRINTING FROM THE LAST WE GET
     i = v.end();
     i--;
     cout<<*i<<" "<<endl;


return 0;
}
