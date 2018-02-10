#include <iostream>
#include <stack>

using namespace std;

void inohaify(stack<int> &inoha, stack<int> &hanoi){
    
    if(inoha.empty()) return;

    int temp = inoha.top();
    inoha.pop();

    if(hanoi.empty() || temp >= hanoi.top()){
            hanoi.push(temp);
            inohaify(inoha, hanoi);
    }else{
        while(!hanoi.empty() && temp < hanoi.top()){
            inoha.push(hanoi.top());
            hanoi.pop();
        }

        hanoi.push(temp);
        inohaify(inoha, hanoi);
    }

    while(!hanoi.empty()){
        inoha.push(hanoi.top());
        hanoi.pop();
    }

    return;
}

int main(void){

    int numbers[] = {3, 5, 1, 7, 4};

    stack<int> hanoi;
    stack<int> inoha;

    cout << "Before: ";
    for(int i = 0; i < 5; i++){
        inoha.push(numbers[i]);
        cout << numbers[i] << " ";
    }
    cout << endl;

    inohaify(inoha, hanoi);

    cout << "After: ";
    while(!inoha.empty()){
        cout << inoha.top() << " ";
        inoha.pop();
    }
    cout << endl;
}
