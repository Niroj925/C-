#include<iostream>
#include<conio.h>
using namespace std;
void increment();
int main()
{
	top:increment();
	getch;
	goto top;
	return 0;
}
void increment()
{
	static int x=1;
	cout<<x<<endl;
	x++;
}
