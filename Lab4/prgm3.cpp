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
int main()
{
    vector<Item> cart={
        {"Phone",2,75000},
        {"Laptop",1,110000},
        {"Headphones",1,4000},
    };
    Item expensive=MostExpensiveItem(cart);
    cout<<"Most Expensive Item:"<<expensive.name<<endl;
    cout<<"Highest Unit Price: Rs."<<expensive.price<<endl;
    return 0;
}

