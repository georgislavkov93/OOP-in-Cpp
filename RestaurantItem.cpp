#include "RestaurantItem.h"

using namespace std;


RestaurantItem::RestaurantItem()
{
    this->price = 0;
    this->quantity = 0;
}

RestaurantItem::RestaurantItem(itemType type,string name,int quantity,double price)
{
    this->type = type;
    this->name = name;
    this->quantity = quantity;
    this->price = price;
}

void RestaurantItem::setType(itemType type)
{
    this->type = type;
}
itemType RestaurantItem::getType()
{
    return type;
}
void RestaurantItem::setName(string name)
{
    this->name = name;
}
string RestaurantItem::getName()
{
    return name;
}
void RestaurantItem::setQuantity(int quantity)
{
    this->quantity = quantity;
}
int RestaurantItem::getQuantity()
{
    return quantity;
}
void RestaurantItem::setPrice(double price)
{
    this->price = price;
}
double RestaurantItem::getPrice()
{
    return price;
}

RestaurantItem::~RestaurantItem()
{

}
