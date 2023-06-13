#incldue<bits/srdc++.h>
using namespace std;
int main(){
// vectors internally use dynamically allocated arrrays only
// if the current allocated space becomes full 
// -> create a new layer space of double size
// -> copy elements from old space to new space
// -> free old space

// CAPACITY AND SIZE FUNCTION IN VECTORS
vector<int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);

cout<<v.size()<<" "<<v.capacity()<<endl;
 // AVERAGE TIME FOR INSERTING AN ELEMENT IS O(1)
  
  
return 0 ;
}
