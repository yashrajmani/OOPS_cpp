//runtime || dynamic
//function overRIDING
//depends on object of class which calls the function

#include <iostream>
using namespace std;

class A
{
public:
    void disp()
    {
        cout << "SUPER A"<<endl;
    }
};
class B
{
public:
    void disp()
    {
        cout << "SUPER from B"<<endl;
    }
};

int main()
{
    A s1;
    s1.disp();

    B s2;
    s2.disp();

    return 0;
}