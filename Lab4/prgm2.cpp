#include <iostream>
#include<vector>
using namespace std;
class Item
{
    public:
    string name;
    int quantity;
    double price;
};
double calculateTotal(const vector<Item>& cart)
{
    double total=0;
    for(auto item:cart)
    {
        total=total+item.quantity*item.price;
    }
    return total;
}
int main()
{
    vector<Item> cart={
        {"Phone",2,75000},
        {"Laptop",1,110000},
        {"Headphones",1,4000},
    };
    cout<<"Total Amount: Rs."<<calculateTotal(cart)<<endl;
    return 0;
}
