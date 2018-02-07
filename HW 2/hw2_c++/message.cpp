#include <iostream>
using namespace std;

class Message{
    public:
        Message(const string & str) : msg(str) {}
        char & operator() (int pos)
            {return msg[msg.length() - pos - 1];}

    private:
        string msg;
};

int main(void){
    Message privet("3apabctbynte");
    for(int i = 0; i < 12; i++)
        cout << privet(i);
    cout << endl;

    return 0;
}

