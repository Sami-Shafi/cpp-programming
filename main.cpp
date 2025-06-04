#include<bits/stdc++.h>
using namespace std;

class Citizen {
    public:
    string name, blood;
    int age;
    bool marriageStatus;

    Citizen(string name, int age, string blood, bool marriageStatus) {
        this->name = name;
        this->age = age;
        this->blood = blood;
        this->marriageStatus = marriageStatus;
    }

    void intro() {
        cout << "My name is " << name << ". I am " << age << " and I'm happily " << ((marriageStatus) ? "married" : "single") << ". My blood group is " << blood << "." << endl << endl;
    }
};

int main()
{
    Citizen Dinan("Medri Ferdinand", 38, "O+", true);
    Citizen Nep("Nepoleon Enzo", 25, "AB+", false);
    Citizen Trudo("Justin Trudo", 46, "A+", true);

    Dinan.intro();
    Nep.intro();
    Trudo.intro();

    return 0;
} 