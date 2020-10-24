#include<iostream>
using namespace std;
class demo
{
	private:
		int a;
	public:
	void set(int x)
	{
		a=x;
	}	
	demo& sum(demo & ob2,demo & ob3)
	{
		ob3.a=a+ob2.a;
		return ob3;
	}
	void print()
	{
		cout<<"value:"<<a<<endl;
	}
};
int main()
{
	demo d1,d2,d3;
	d1.set(11);
	d2.set(22);
	d3=d1.sum(d2,d3);
	d1.print();
	d2.print();
	d3.print();
	return 0;
}
