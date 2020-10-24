#include<iostream>
using namespace std;
class ta
{
	private:
		int p,t,r;
		int interest()
		{
			return (p*t*r)/100;
		}
	public:
	int getdata()
	{
		cout<<"enter principle ,rate and time:";
		cin>>p>>r>>t;
	}	
	int display()
	{
			cout<<"total amount:"<<p+interest();
	}	
};
int main()
{
	ta d;
	d.getdata();
	d.display();
	return 0;
}
