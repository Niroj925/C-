#include<iostream>
using namespace std;
class A
{
    private:
    int feet,inch;
    public:
    A (float a)
    {
        feet=int(a);
        inch=(a-feet)*12;
    }
    void show()
    {
        cout<<"feet:"<<feet<<"\tinch:"<<inch<<endl;
    }
};
int main()
{
    float x;
    cout<<"enter total length:";
    cin>>x;
    A obj(x);
    obj.show();
}