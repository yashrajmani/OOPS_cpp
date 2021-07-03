//c takes from A , B takes from A 
// A has two kids

#include <iostream>
using namespace std;

class a
{
    public:
    a()
    {
        cout<<"I AM A level 1"<<endl;
    }
};
class b:public a
{
    public:
    b()
    {
        cout<<"I AM B level 2 "<<endl;
    }
};
class c:public a
{ 
    public:
    c()
    {
        cout<<"I AM C level 3"<<endl;
    }
};

int main()
{
    c obj1;
    cout<<endl;
    b obj2;
    
    return 0;
}