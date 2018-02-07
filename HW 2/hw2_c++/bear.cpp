#include <iostream>
using namespace std;

class Bear{
    public:
        Bear() {cout << "Growl "; }
        void roar() {cout << "Roar "; }
        ~Bear() {cout << "Stomp stomp stomp "; }
};

int main (void) {
    Bear bear;
    bear.roar();
    cout << "Run! ";
    return 0;
}
