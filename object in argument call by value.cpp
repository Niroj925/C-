#include<iostream>
using namespace std;
class demo
{
	private:
			int a;
	public:
	void setdata(int x)
	{
		a=x;
	}	
	void sumdata(demo ob1,demo ob2)
	{
		a=ob1.a+ob2.a;
	}
	void showdata()
	{
		cout<<"value of a="<<a<<endl;
	}
};
int main()
{
	demo d1,d2,d3;
	d1.setdata(10);
	d2.setdata(20);
	d3.sumdata(d1,d2);
	d1.showdata();
	d2.showdata();
	d3.showdata();
	return 0;
}
