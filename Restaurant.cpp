#include "Restaurant.h"

using namespace std;

Restaurant::Restaurant()
{
    //ctor
}

void Restaurant::addProduct(RestaurantItem &item)
{
    this->container.push_back(&item);
}
void Restaurant::removeProduct(int index)
{
    this->container.erase(container.begin()+index);
}
void Restaurant::changePrice(int index, double price)
{
    for(int i=0;i<container.size();i++)
    {
        if(i==index)this->container[i]->price = price;
    }
}
void Restaurant::changeName(int index, string name)
{
    for(int i=0;i<container.size();i++)
    {
        if(i==index)this->container[i]->name = name;
    }
}
void Restaurant::print()
{
    for(int i=0;i<container.size();i++)
    {
        this->container[i]->print();
    }
}
void Restaurant::getAllNonAlcohol()
{
    for(int i=0;i<container.size();i++)
    {
        if(this->container[i]->getType()==Napitka && this->container[i]->getAlcohol()==0)cout<<"Drinks containing 0% alcohol: "<<this->container[i]->getName();
    }
}

Restaurant::~Restaurant()
{
    //dtor
}
