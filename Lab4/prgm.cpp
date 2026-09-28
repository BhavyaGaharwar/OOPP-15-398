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
        cout<<"Items:"<<item.name<<"Quantity:"<<item.quantity<<"Price: Rs."<<item.price<<endl;
    }
}

double calculateTotal(const vector<Item>& cart)
{
    double total=0;
    for(auto item:cart)
    {
        total=total+item.quantity*item.price;
    }
    return total;
}

Item MostExpensiveItem(const vector<Item>& cart)
{
    Item expensive=cart[0];
    for(auto item:cart)
    {
        if(item.price > expensive.price)
        {
            expensive=item;
        }
    }
    return expensive;
}

void applyDiscount(vector<Item>& cart)
{
    for(auto& item:cart)
    {
        if(item.price>1000)
        {
            item.price=item.price*0.90;
        }
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
    cout<<"Total Amount: Rs."<<calculateTotal(cart)<<endl;
    Item expensive=MostExpensiveItem(cart);
    cout<<"Most Expensive Item:"<<expensive.name<<endl;
    cout<<"Highest Unit Price: Rs."<<expensive.price<<endl;
    applyDiscount(cart);
    cout<<"Updated Cart Total: Rs."<<calculateTotal(cart)<<endl;

    return 0;
}