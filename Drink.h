#ifndef DRINK_H
#define DRINK_H

using namespace std;



class Drink : public RestaurantItem
{
public:
    int alcohol;

    Drink();
    Drink(string name,int quantity,double price,int alcohol);
    void setAlcohol(int alcohol);
    int getAlcohol();
    friend bool operator>(const Drink &d1, const Drink &d2);
    void print();
    ~Drink();
};

#endif // DRINK_H
