#include<iostream>
using namespace std;
class time
{
	private:
		int hr;
		int min;
	public:
	void settime(int ,int);
	void showtime(void);
	void sumtime(time,time);	
};
void time::settime(int x,int y)
{
	hr=x;
	min=y;
}
void time::showtime(void)
{
	cout<<"\t"<<hr<<"hour"<<endl;
	cout<<"\t"<<min<<"minutes"<<endl;
}
void time::sumtime(time t1,time t2)
{
	min=t1.min+t2.min;
	hr=min/60;
	min=min%60;
	hr=hr+t1.hr+t2.hr;
}
int main()
{
	time t1,t2,t3;
	t1.settime(2,35);
	t2.settime(5,45);
	t3.sumtime(t1,t2);
	t1.showtime();
	t2.showtime();
	t3.showtime();
	return 0;
}
