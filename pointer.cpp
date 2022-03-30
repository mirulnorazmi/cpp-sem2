#include <iostream>
using namespace std;
int main()
{
  int *p;
  int num1;
  int num2;
  p = &num1;

  cout << "Enter a number" << endl;
  cin >> num1;

  cout << *p << endl;
  cout << num1 << endl;
  
  cout << &p << endl;
  cout << &num1 << endl;
  cout << p << endl;

  return 0;
}