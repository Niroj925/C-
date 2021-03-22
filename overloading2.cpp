#include<iostream>
using namespace std;
class concat
{
    private:
    int a;
    public:
    void getdata(int x)
    {
      a=x;
    }
    void show()
    {
        cout<<"a:"<<a<<endl;
    }
    concat operator+(concat obj)
    {
        concat temp;
        temp.a=a+obj.a;
        return temp;
    }
};
int main()
{
    concat o1,o2,o3;
    o1.getdata(6);
    o2.getdata(8);
    o3=o1+o2;
    o3.show();
}