#include<iostream>
using namespace std;
class sum
{
    int a,b;
    public:
    void getdata();
    void showdat();
};
void sum::getdata()
{
    cout<<"enter any two number:";
    cin>>a>>b;
};
void sum:: showdat()
{
    cout<<"sum:"<<a+b<<endl;
};
int main()
{
    sum s;
    s.getdata();
    s.showdat();
    return 0;
}