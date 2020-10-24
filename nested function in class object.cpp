#include<iostream>
using namespace std;
class set
{
	private:
		int m,n;
	public:
	void input();
	int largest();
	void display();	
};
inline void set::input()
{
  cout<<"eneter any two number:";
  cin>>m>>n;	
}
inline int set::largest()
{
	if(m>n)
	{
		return m;
	}
	else
	return n;
}
inline void set::display()
{
	cout<<"greatest number is:"<<largest()<<endl;
}
int main()
{
	set s1;
	s1.input();
	s1.largest();
	s1.display();
	return 0;
}
