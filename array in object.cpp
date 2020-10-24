#include<iostream>
using namespace std;
class array
{
	float x;
	public:
		float getdata(float n)
		{
			x=n;
		}
	   float inputdata()
	   {
	   	cout<<"enter any number:";
	   	cin>>x;
	   }
	   float display()
	   {
	   	cout<<"number:"<<x<<endl;
	   }	   	
};
int main()
{
	array a[4];
	a[0].getdata(11.11);
	a[1].getdata(22.22);
	a[2].inputdata();
	a[3].inputdata();
	for(int i=0;i<4;i++)
	{
		a[i].display();
	}
	return 0;
}
