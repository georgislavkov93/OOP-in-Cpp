#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <vector>

using namespace std;

class Restaurant
{
public:
    vector<RestaurantItem*> container;
    Restaurant();
    void addProduct(RestaurantItem &item);
    void removeProduct(int index);
    void changePrice(int index, double price);
    void changeName(int index, string name);
    void print();
    void getAllNonAlcohol();
    ~Restaurant();
};

#endif // RESTAURANT_H
