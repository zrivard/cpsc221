#include <iostream>
#include <stack>
using namespace std;

int foo(stack<int> & s){
    int top = s.top();
    s.pop();
    if(s.empty()) return top;

    int bar = foo(s);
    s.push(top);
    return bar;
}

void fun(stack<int> & s){
    if(s.empty()) return;
    int e = foo(s);
    fun(s);
    s.push(e);
}

int main(void){
    stack<int> s;

    for(int i = 0; i < 5; i++)
        s.push(i);
    
    cout << "Top of stack -> ";
    for(int i = 0; i < 5; i++){
        int x = s.top();
        cout << x << " ";
        s.pop();
    }
    cout << "<- bottom of stack";

    cout << endl;
    
    for(int i = 0; i < 5; i++)
        s.push(i);    
   
    //cout << foo(s) << endl;

    fun(s);
    cout << "Top of stack -> ";
    for(int i = 0; i < 5; i++){
        int x = s.top();
        cout << x << " ";
        s.pop();
    }
    cout << "<- bottom of stack" << endl;


    
    return 0;
}
