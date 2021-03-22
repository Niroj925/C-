#include<iostream>
using namespace std;
int sum(int x,int y=5,int z=10)
{
    int s;
    s=x+y+z;
    return s;
}
int main()
{
    int s1,s2,s3;
    s1=sum(1,2,3);
    s2=sum(4,5);
    s3=sum(6);
    cout<<"s1="<<s1<<endl<<"s2="<<s2<<endl<<"s3="<<s3<<endl;
    return 0;
}