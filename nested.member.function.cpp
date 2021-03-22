#include<iostream>
using namespace std;
class nest
{
    int a,b;
    public:
    int setdata();
    int max();
    void show();
};
int nest::setdata()
{
    cout<<"enter any  two number:";
    cin>>a>>b;
}
int nest::max()
{
    if (a>b)
    return a;
    else
    b;
}
void nest::show()
{
    cout<<"lagest number is:"<<max()<<endl;
}
int main()
{
    nest n;
    n.setdata();
    n.show();
    return 0;
}