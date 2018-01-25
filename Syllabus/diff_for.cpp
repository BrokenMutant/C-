#include<iostream>
using namespace std;
int main()
{
	string str {"Hello!"};
	for (char c : str)	// could be also used like this auto c :
	{
		cout<<"["<<c<<"]";
	}
	cout<<endl;
	return 0;
}




