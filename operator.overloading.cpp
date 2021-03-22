#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
complex operatoradd(complex c)
{
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return(temp);
}
   void show()
    {
        cout<<"a:"<<a<<"b:"<<b<<endl;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(7,8);
    c2.setdata(4,6);
    c3.show();
    return 0;
}