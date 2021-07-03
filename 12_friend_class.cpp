//friend is always loyal
// parameter    void disp(X obj)
//    friend class ABC;

#include <iostream>
using namespace std;

class X
{
private:
    char ch = 'A';
    int num = 10;

public:
    friend class ABC;
};

class ABC : public X
{
public:
    void disp(X obj)
    {
        cout << obj.ch << endl;
        cout << obj.num << endl;
    }

};

int main()
{
    X obj2;

    ABC obj1;

    obj1.disp(obj2);

    return 0;
}