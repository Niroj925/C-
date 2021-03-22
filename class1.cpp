#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length,breadth;
    public:
    int setdata(int l,int b)
    {
     length=l;
     breadth=b;
    }
    void dispaly()
    {
        cout<<"length:"<<length<<"breadth:"<<breadth<<endl;
    }
    int area()
    {
    int a;
    a= (length*breadth);
    cout<<"area:"<<a<<endl;
    }
};
int main()
{
rectangle obj;
int l,b;
cout<<"enter length and breadth:";
cin>>l>>b;
obj.setdata(l,b);
obj.dispaly();
obj.area();
}
