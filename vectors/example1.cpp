#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int>num={1,2,3,4,5};
  num.push_back(6);
  num.push_back(7);
  num.pop_back();
  num.erase(num.begin()+2);                //erase
  num.insert(num.begin()+2,4);           //insert
  for(int i:num){
    cout<<i<<" ";
   }
   
   cout<<endl;
   num.emplace_back(5);                 //push emplace
   for(int i:num)
     cout<<i<<" ";
    cout<<endl;
   
   num.emplace(num.begin()+1,10);      //push emplace at specified position
   for(int i:num) 
      cout<<i<<" ";
    cout<<endl;
   cout<<num.size()<<endl;
   num.shrink_to_fit();                //shrink to fit
   cout<<num.size()<<endl;
  
   cout<<num.capacity()<<endl;          //capacity     

    num.clear();                  //clear


 
   num.resize(5);                         //resize
   for (int i:num)
    cout<<i<<" ";
  cout<<endl;
   /*
       When we resize the vector(if we expand means in this case)  it will refaultly assign
        the values of the vectors as    *0*   
   
   */
    
    num.reserve(12);
    cout<<num.size()<<endl;
    cout<<num.capacity()<<endl;        // it gives 8 in this case because we assigned 8 elements at most in the above codes so there no need for reallacation of memory upto 8 elements 
    


    cout<<num.max_size()<<endl;        //  it gives the maximum elements that a vector can hold 


    for(auto i:num)
      cout<<i<<" ";
     
  return 0;
}