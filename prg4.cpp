#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>numbers={10,34,24,97,54};
    cout<<"elements of the collection are:"<<endl;;
    for(auto num:numbers) {
    cout<<num<<" ";
}
   cout<< endl;
   return 0;
}