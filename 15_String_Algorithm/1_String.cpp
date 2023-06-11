#include<bits/stdc++.h>
using namespace std;
int main(){
string str = "geeksforgeeks";
cout<<str;
// printing of string

// ADVANTAGES OVER C SIIZE ARRAY
// -> we do not have to worry about size
// -> can assign a string later
// -> support of operators like +,<,>,==
// -> richer library functions
// can be converted to c style if needed

// to GET LENGHT 
cout<<str.length()<<endl;

// WE CAN ADD STRINGS AS
str = str + "xyz";
cout<<str<<endl;

// to find the substring
cout<<str.substr(1,3)<<endl; 
// both index are included


// to find the first occurence of the string in the given string
cout<<str.find("fg");
// return the first occurence of the string
// -> here fg is occuring at the first index so : op / -> 1

  // if the string is not present it returns
  // string :: npos 

return 0;
}
