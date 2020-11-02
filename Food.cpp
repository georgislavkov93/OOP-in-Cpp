#include "Food.h"

using namespace std;


Food::Food()
{
    this->type = Hrana;
    this->quantity = 0;
    this->price = 0;
    this->weight = 0;
}

Food::Food(string name,int quantity,double price,double weight)
{
    this->type = Hrana;
    this->name = name;
    this->quantity = quantity;
    this->price = price;
    this->weight = weight;
}
void Food::setWeight(double weight)
{
    this->weight = weight;
}
double Food::getWeight()
{
    return weight;
}
bool operator>(const Food &f1, const Food &f2)
{
    if(f1.weight > f2.weight)return true;
    else return false;
}
void Food::print()
{
    cout<<"Name: "<<this->name<<endl<<"quantity: "<<this->quantity<<endl<<"price: "<<this->price<<endl<<"weight: "<<this->weight<<endl<<endl;
}

Food::~Food()
{

}

int Food::getAlcohol()
{

}
