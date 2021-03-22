#include<iostream>
using namespace std;
class a
{
    int a;
    public:
    int dispa(int x)
    {
        a=x;
        cout<<"this is class a:"<<x<<endl;
    }
};
class b
{
    int b;
    a obj;
    public:
    int dispb(int y)
    {
    b=y;
    obj.dispa(10);
    cout<<"this is class b:"<<y<<endl;
    }
};
int main()
{
    b objb;
    objb.dispb(100);
    return 0;
}