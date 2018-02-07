#include <iostream>
using namespace std;

class LegoMov{
    public:
        bool *awes;
        void setAwes(bool b) {*awes = b;}
        void isAwes() {cout << *awes << endl;}
        LegoMov() {awes = new bool(false);}
};

int main(void){
    LegoMov mov;
    mov.isAwes();
    mov.setAwes(true);
    mov.isAwes();
    return 0;
}
