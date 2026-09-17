#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>numbers={10,34,24,97,54};
    cout<<"Elements of the collection are:"<<endl;;
    for(auto element:numbers) {
    cout<<element<<" ";
}
   cout<< endl;
   return 0;
}