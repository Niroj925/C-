#include<iostream>
using namespace std;
class demo
{
	public:
		void set()
		{
			a=10;
			b=20;
		}
		
	void show()const
	{
		cout<<"hello world"<<endl;
	}
};
int main()
{
	const demo d1;
	d1.show();
	return 0;
}
