#include <iostream>

using namespace std;

int operator + (int a2)
{
  int a=0;
  for (int i = 0; i < 5; i++)
    a += (a[i] + a2.a[i]);
  return a;
}

int main()
{
  int array1[5] = {2,3,4,4,7};
  int array2[5] = {3,3,4,5,5};
    cout << "The sum of all elements in the two arrays is :\n     ";
    cout << array1+array2;

  cout << endl;
  return 0;
}
