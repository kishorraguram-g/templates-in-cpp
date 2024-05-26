#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
    for (int i:v){
        cout<<i<<" ";
    }
}
int main(){
    vector<int>vector1(10);
    print(vector1);
}