//friend is always loyal
//global function
//  friend void disp(X obj);

#include <iostream>
using namespace std;

class X
{
private:
    char ch = 'A';
    int num = 10;

public:
    friend void disp(X obj);
};

void disp(X obj)
{
    cout << obj.ch << endl;
    cout << obj.num << endl;
}

int main()
{
    X obj;
    
    disp(obj);

    return 0;
}