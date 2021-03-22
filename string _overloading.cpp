#include<iostream>
#include<string.h>
using namespace std;
class scat
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
        cout<<"you entered :"<<s<<endl;
    }
    scat operator+(scat ob)
    {
        scat temp;
       strcat(s,ob.s);
       strcpy(temp.s,s);
       return temp;
    }
};
int main()
{
    scat a1,a2,a3;
    a1.getdata();
    a2.getdata();
    a3=a1+a2;
    a3.show();
}