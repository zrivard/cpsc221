#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(void){
    int *array = new int[4];
    for(int i = 0; i < 4; i++)
        array[i] = rand() % 10;
    delete array;
    return 0;
}
