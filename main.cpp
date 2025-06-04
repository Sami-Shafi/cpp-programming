#include<bits/stdc++.h>
using namespace std;

class Fruit {
    public:
    int price;
    bool isRipe;

    Fruit(int price, bool isRipe) {
        this->price = price;
        this->isRipe = isRipe;
    }
};

int main()
{

    Fruit* mango = new Fruit(45, true);
    Fruit* banana = new Fruit(25, false);
    *banana = *mango;

    delete mango;

    // When you have 2 dynamic objects and if you delete the one you copy from, the newer object will give error cause they are basically pointers. so use * or manually copy all fields.

    // cout << "Mango:" << endl << "BDT " << mango->price << "; Ripe: " << ((mango->isRipe)? "Yes" : "No") << "." << endl;

    cout << "Banana:" << endl << "BDT " << banana->price << "; Ripe: " << ((banana->isRipe)? "Yes" : "No") << "." << endl;

    return 0;
} 