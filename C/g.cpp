#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

int fact(int num)
{
	if (num == 1) {return 1;}
	else return num*fact(num-1);
}


int main()
{
	int n;
	cout<<"\n Enter a number : "<<endl;
	cin>>n;
	int k = fact(n);
	cout<<"\n The factorial of "<<n<<" is = "<<k<<endl;
	return 0;
}
