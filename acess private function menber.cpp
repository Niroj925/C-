#include<iostream>
using namespace std;
class jpt
{
	private:
		char t[200];
	void read()
	{
		cout<<"enter any text:";
		cin>>t;
	}
	public:
    void update()
	{
	 read();	
	}
	void display()
	{
		cout<<"entered text is:"<<update();
	}
};
int main()
{
	jpt s;
	s.update();
	s.display();
	return 0;
}
