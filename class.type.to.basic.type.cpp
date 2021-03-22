#include<iostream>
using namespace std;
class A
{
    private:
    int feet,inch;
    public:
    A(int f,int i)
    {
    feet=f;
    inch=i;
    }
    operator float()
    {
        float x=feet+(inch/12.0);
        return x;
    }
};
int main()
{
    int a,b;
    cout<<"enter length in feet and  inch:";
    cin>>a>>b;
    A obj(a,b);
    float y=float(obj);
    cout<<"length:"<<y<<endl; 
}