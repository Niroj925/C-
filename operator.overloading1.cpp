#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    int setdata(int x,int y)
    {
      a=x;
      b=y;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    int show()
    {
        cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(4,5);
    c2.setdata(6,7);
    c3=c1+c2;
    c3.show();
    return 0;
}