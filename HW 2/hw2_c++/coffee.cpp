#include <iostream>
using namespace std;

class Coffee{
    public:
        bool awesome;
        void setName(int);
        char *getName() {return name;}
        Coffee() : awesome(true), name(new char[100]) {}
        ~Coffee() {cout << "Destructor" << endl; delete[] name;}
    private:
        char *name;
};

void Coffee::setName(int type){
    if(type == 1)
         name = "Zach";
    else
         name = "Cam";
    cout << "Name changed to: " << name << " " << endl;
}

int main(void){
    Coffee latte;
    latte.setName(1);
    if(latte.awesome) {
        Coffee caffelatte(latte);
        cout << caffelatte.getName() << endl;
        caffelatte.setName(2);
    }
    cout << latte.getName() << endl;
    return 0;
}
