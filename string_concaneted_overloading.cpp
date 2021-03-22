#include<iostream>
#include<string.h>
using namespace std;
class concat
{
    private:
    char s[20];
    public:
    void getdata()
    {
        cout<<"enter any string:";
        cin>>s;
    }
    void show()
    {
        cout<<"you entered:"<<s<<endl;
    }
    concat operator+(concat ob)
    {
        concat temp;
        strcat(s,ob.s);
       strcpy(temp.s,s);
        return temp;
    }
};
int main()
{
    concat ob1,ob2,ob3,ob4;
    ob1.getdata();
    ob2.getdata();
    ob3=ob1+ob2;
    ob3.show();
   
}