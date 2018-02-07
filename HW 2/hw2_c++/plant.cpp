#include <iostream>
using namespace std;

class Plant{
    public:
        string name = "some name";
        void setName(string n) {name = n;}
        void getName() {cout << name << endl;}
};

Plant * imi(Plant & orig) {
    Plant * tater = new Plant(orig);
    cout << "Used copy cont" << endl;
    return tater;
}

int main(void){
    Plant pea; //Uses the default
    pea.getName();
    pea.setName("First");
    pea.getName();
    Plant *rep; //Just a pointer...
    rep = imi(pea); //imi calls the copy
    rep->getName();
    return 0;
}
