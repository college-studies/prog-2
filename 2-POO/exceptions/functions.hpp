#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP
#include <exception>
#include <iostream>

using namespace std;

class Test
{
private:
  int x = 10;

public:
  Test() { cout << "Constructor of Test " << endl; }
  ~Test() { cout << "Destructor of Test " << endl; }
  void show() { cout << x << endl; }
  void setx(int z) { x = z; }
};

void example1()
{
  int x = -1;

  // Some code
  cout << "Before try \n";
  try
  {
    cout << "Inside try \n";
    if (x < 0)
    {
      throw x;
      cout << "After throw (Never executed) \n";
    }
  }
  catch (double x)
  {
    cout << "Exception Caught \n"
         << x << endl;
  }

  cout << "After catch (Will be executed) \n";
}

void example2()
{
  try
  {
    throw "message";
  }
  catch (char *excp)
  {
    cout << "Caught " << excp;
  }
  catch (...)
  {
    cout << "Default Exception\n";
  }
}

void example3()
{
  try
  {
    throw 'a';
  }
  catch (char x)
  {
    cout << "Caught ";
  }
}

void example4(int *ptr, int x)
{
  try
  {
    if (ptr == NULL)
      throw ptr;
    if (x == 0)
      throw x;
  }
  catch (...)
  {
    cout << "Caught exception from function";
  }
}

void example5()
{
  try
  {
    Test t1;
    throw 10;
  }
  catch (int i)
  {
    cout << "Caught " << i << endl;
  }
}

void example6()
{

  throw bad_alloc();
}

void example7(double x, double y)
{
  try
  {
    if (y == 0)
      throw invalid_argument("Impossivel Div por zero");

    auto z = x / y;

    cout << z << endl;
  }
  catch (overflow_error e)
  {
    cout << "Mensagem de erro: " << e.what() << endl;
  }
}

void example8()
{
  try
  {
    Test t1;
    t1.setx(20);
    throw t1;
  }
  catch (Test t)
  {
    t.show();
  }
}

void example9()
{
  Test t1;
  t1.setx(20);
  Test *t2 = &t1;
  throw t2;
}

#endif