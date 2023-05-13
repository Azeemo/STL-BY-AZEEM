#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> v = {10,20,30,40,50};
auto i = v.begin();
i= next(i);
cout<<(*i)<<endl;
i= next(i,2);
cout<<(*i)<<endl;
i  = prev(i);
cout<<*i<<endl;

// Next And Prev return a position which we give to 'i', 
//derefrence it and get the value

auto  i1 =v.begin();
advance(i1,3);
cout<<*i1 <<endl;
// moves the iterator itself and derefrence automatically and
// give back the position



return 0;
}
