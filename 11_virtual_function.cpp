//function overding  AVOID
//pointer
//pointer of base
//pointing to child

#include <iostream>
using namespace std;
class base
{
public:
    virtual void disp()
    {
        cout << "I AM BASE" << endl;
    }
    void show()
    {
        cout << "I AM BASE show " << endl;
    }
};

class child : public base
{
public:
    void disp()
    {
        cout << "I AM CHILD" << endl;
    }
    void show()
    {
        cout << "I AM child  SHOW" << endl;
    }
};

int main()
{
    base* bptr; 
    child c;

    bptr = &c;  

    bptr->disp(); //disp is virtual

    bptr->show(); //show is not virtual

   return 0;
}