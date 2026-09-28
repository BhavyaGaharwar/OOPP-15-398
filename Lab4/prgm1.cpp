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

void displayCart(const vector<Item>& cart)
{
    cout<<"Items in carts:"<<endl;
    for(auto item:cart)
    {
        cout<<" Items: "<<item.name<<" Quantity: "<<item.quantity<<" Price: Rs. " <<item.price<<endl;
    }
}

int main()
{
    vector<Item> cart={
        {"Phone",2,75000},
        {"Laptop",1,110000},
        {"Headphones",1,4000},
    };
    displayCart(cart);
    return 0;
}
