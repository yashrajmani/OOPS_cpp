#include <iostream>
using namespace std;

class add
{
    public:
    add(int n,int m)
    {
        cout<<"pass paramters when declaring object"<<endl;
        cout<<"SUM :"<<m+n;
    }


};

int main()
{
    add obj(10,30);

    return 0;
}