#include <iostream>
using namespace std;

void foo(int &bar, int *baz){
    bar += *baz;
}

void foo2(int &bar, int *baz){
    *baz = bar + *baz; //Why not *baz += bar.....
}

int main(void){
    int bar = 7;
    int *baz = new int(12);
    foo(bar, baz);
    cout << "New bar = " << bar << endl;
    foo2(bar, baz);
    cout << "New baz = " << *baz << endl;

    int shrub = 10;
    int *bush = &shrub;
    cout << *bush << " ";
    foo2(shrub, bush);
    cout << shrub << " " << *bush << endl;
    return 0;
}
