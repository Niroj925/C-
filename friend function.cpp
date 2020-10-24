#include<iostream>
using namespace std;
class c2;
class c1
{
	int a;
	public:
		void set(int x)
		{
			a=x;
		}
		void display()
		{
			cout<<"value of a:"<<a<<endl;
		}
		friend void printsum(c1,c2);
};
class c2
{
	int b;
	public:
		void set(int y)
		{
			b=y;
		}
		void display()
		{
			cout<<"value of b:"<<b<<endl;
		}
		friend void printsum(c1,c2);
};
void printsum(c1 ob1,c2 ob2)
{
	cout<<"sum of a and b:"<<(ob1.a+ob2.b)<<endl;
}
int main()
{
	c1 o1;
	c2 o2;
	o1.set(11);
	o2.set(22);
	o1.display();
	o2.display();
	printsum(o1,o2);
	return 0;
}
