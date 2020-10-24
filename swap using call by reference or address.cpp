#include<iostream>
using namespace std;
int swap(int*,int*);
int main()
{
	int a=10,b=20;
	cout<<"value of a & b before swap:"<<a<<"\t"<<b<<endl;
	swap(&a,&b);
	cout<<"value of a & b after swap:"<<a<<"\t"<<b<<endl;
	return 0;
}
int swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	return(*x,*y);
}
