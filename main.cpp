#include <iostream>
#include <vector>
#include <string>
#include "RestaurantItem.h"
#include "RestaurantItem.cpp"
#include "Food.h"
#include "Food.cpp"
#include "Drink.h"
#include "Drink.cpp"
#include "Restaurant.h"
#include "Restaurant.cpp"
using namespace std;

int main()
{
    Restaurant restorant;
    Food spag("Spaghetti", 20, 6.80, 400);
    Food bob("Beans", 5, 3.70, 450);
    Drink cola("Cola", 80, 1.20, 0);
    Drink vino("Vino", 35, 4.90, 12);
    restorant.addProduct(spag);
    restorant.addProduct(bob);
    restorant.addProduct(cola);
    restorant.addProduct(vino);
    restorant.changePrice(1, 30.79);
    restorant.changeName(1, "Beans No.2");
    restorant.removeProduct(0);
    restorant.print();
    cout<<endl<<endl<<endl;
    restorant.getAllNonAlcohol();
    cout<<endl<<endl<<endl;
    vino.print();
    if(bob>spag)cout<<"beans heavier than spaghetti";
    else cout<<"beans not heavier than spaghetti";






    return 0;
}
