#include<iostream>
using namespace std;
class alpha
{
	private:
		int a;
	public:
	void set(int x)
	{
		a=x;
	}
	friend class beta;	
};
class beta
{
	public:
		void show(alpha b)
		{
			cout<<"set value:"<<b.a<<endl;
		}	
};
int main()
{
	alpha ob1;
	ob1.set(11);
	beta b;
	b.show(ob1);
	return 0;
}
