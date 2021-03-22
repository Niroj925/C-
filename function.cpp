#include<iostream>
using namespace std;
int intrest(int p,int t,int r)
{
int i;
i=(p*t*r)/100;
return i;
};
int main()
{
    int p,t,r;
    cout<<"enter principle,time and rate:";
    cin>>p>>t>>r;
    cout<<"total intrest="<< intrest(p,t,r)<<endl;
    return 0;
}
