#include<iostream>
#include<conio.h>
using namespace std;
class account
{
	private:
		static int count;
		int balance;
	public:
	 static	void setcount(int n)
		{
			count=n;
			cout<<"count="<<count<<endl;
		}
		void setbalance(int b)
		{
			balance=b;
			cout<<"balance:"<<balance<<endl;
		}
};
int account::count;
int main()
{
	account::setcount(100);
	account a;
	a.setbalance(200);
	a.setcount(300);
	getch();
	return 0;
}
