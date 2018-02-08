#include<iostream>
using namespace std;

class dbc;
class abc;
class abc
{
	public:
	int x,y;
	//public:
		abc()
		{
			x=1;
			y=2;
		}
		friend void sum(ostream,abc);
		
};
class dbc 
{
	public:
	int a,b;
	//public:
		dbc()
		{
			a=5;
			b=6;
		}
	
};

void sum(ostream a1,abc b)
{
	a1<<b1.x;
}


int main()
{
	abc a6;
	dbc b6;
	ostream ob;
	sum(ob,a6);
	return 0;
}










