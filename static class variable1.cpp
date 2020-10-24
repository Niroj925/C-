#include<iostream>
#include<conio.h>
using namespace std;
class account
{
	public:
		int static count;
		int balance;
		int getdata(int b)
		{
			balance=b;
			cout<<"balance:"<<balance<<endl;
			count++;
		}
		void display()
		{
		cout<<"count:"<<count<<	endl;
		}
};
int account::count;
int main()
{
	account a1,a2;
	a1.display();
	a2.display();
	a1.getdata(10);
	a1.getdata(5);
	a2.getdata(4);
	a1.display();
	a2.display();
	return 0;
}
