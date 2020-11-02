#ifndef FOOD_H
#define FOOD_H

using namespace std;



class Food : public RestaurantItem
{
public:
    double weight;

    Food();
    Food(string name,int quantity,double price,double weight);
    void setWeight(double weight);
    double getWeight();
    friend bool operator>(const Food &f1, const Food &f2);
    void print();
    ~Food();

    int getAlcohol();
};

#endif // FOOD_H
