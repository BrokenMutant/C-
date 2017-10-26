#include<iostream>
using namespace std;

class Pattern
{
  int i,j;
  std::cout << "\nEnter a number:";
  std::cin >> n;
public:
  void pattern1()
  {
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        std::cout<<"*";
      }
      std::cout << "\n";
    }
  }
  void pattern2()
  {

  }
}



int main()
{
  Pattern myPattern;
  myPattern.pattern1();
  return 0;
}
