// PaSSING VECTOR TO A FUNCTION
void funt(vector<int> &v)
{ v.push_back(10);
  v.push_back(14); }
// this will actually make changes into the vector
// if we dont pass by refernce : NO CHANGES WILL BE DONE IN THE VECTOR 
// REFERENCE ALSO HELP IN AVOIDING TLE AS NO COPY IS CREATED OF VECTOR

// if you  want that your function dont make nay changes into the vector you can use the const function
// for example : if you are thinking to only print the vector
 void funt(const vector<int> &v2){
 for(auto &x: v){
 cout<<x<<" ";  
 }
 
   // also a good practise to use reference in the auo loop
   
 }
