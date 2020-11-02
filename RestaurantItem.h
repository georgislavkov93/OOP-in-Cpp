#ifndef RESTAURANTITEM_H
#define RESTAURANTITEM_H

using namespace std;


enum itemType
{
    Hrana,
    Napitka
};

class RestaurantItem
{
public:
    RestaurantItem();
    RestaurantItem(itemType type,string name,int quantity,double price);
    virtual void print() = 0;
    virtual int getAlcohol() = 0;
    itemType type;
    string name;
    int quantity;
    double price;
    void setType(itemType type);
    itemType getType();
    void setName(string name);
    string getName();
    void setQuantity(int quantity);
    int getQuantity();
    void setPrice(double price);
    double getPrice();
    ~RestaurantItem();
};

#endif // RESTAURANTITEM_H
