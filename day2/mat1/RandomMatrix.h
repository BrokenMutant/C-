#include<iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

class MatrixMan
{
public:
  void matrixGen(int a[10][10],int array_size)
  {
    /* initialize random seed: */
    srand (time(NULL));
    int random;
    /* generate secret number between 1 and 10: */
    random = rand() % 10 + 1;
    int i,j;
    for ( i = 0; i < array_size; i++)
    {
      for (j = 0; j < array_size; j++)
       {
         a[i][j]=random;
         std::cout <<a[i][j]<< '\t';
      }
      std::cout << "\n" << endl;
    }

  }
};
