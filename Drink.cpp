#include "Drink.h"

using namespace std;


Drink::Drink()
{
    this->type = Napitka;
    this->quantity = 0;
    this->price = 0;
    this->alcohol = 0;
}

Drink::Drink(string name,int quantity,double price,int alcohol)
{
    this->type = Napitka;
    this->name = name;
    this->quantity = quantity;
    this->price = price;
    this->alcohol = alcohol;
}
void Drink::setAlcohol(int alcohol)
{
    this->alcohol = alcohol;
}
int Drink::getAlcohol()
{
    return alcohol;
}
bool operator>(const Drink &d1, const Drink &d2)
{
    if(d1.alcohol > d2.alcohol)return true;
    else return false;
}
void Drink::print()
{
    cout<<"Name: "<<this->name<<endl<<"quantity: "<<this->quantity<<endl<<"price: "<<this->price<<endl<<"alcohol: "<<this->alcohol<<endl<<endl;
}

Drink::~Drink()
{

}
