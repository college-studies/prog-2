// Aluno: Fillipe Augusto
// Sobrecarga de Operadores
#include <iostream>

using namespace std;

int getMDC(int a, int b)
{
  if (a == 0)
  {
    return b;
  }

  return getMDC(b % a, a);
}

int getMMC(int a, int b)
{
  return (a / getMDC(a, b)) * b;
}

class Fraction
{
private:
  int numb, dem;

public:
  Fraction() : numb(0), dem(1){};
  Fraction(int n, int d) : numb(n), dem(d)
  {
    if (d == 0)
    {
      numb = 0;
      dem = 1;
    }
  }

  friend Fraction operator+(const Fraction &fract1, const Fraction &fract2);
  friend Fraction operator-(const Fraction &fract1, const Fraction &fract2);
  friend Fraction operator*(const Fraction &fract1, const Fraction &fract2);
  friend Fraction operator/(const Fraction &fract1, const Fraction &fract2);

  friend ostream &operator<<(ostream &os, const Fraction &output);
  friend istream &operator>>(istream &is, Fraction &output);
};

Fraction operator+(const Fraction &fract1, const Fraction &fract2)
{
  Fraction result;
  if (fract1.dem == fract2.dem)
  {
    result.numb = fract1.numb + fract2.numb;
    result.dem = fract1.dem;
  }
  else
  {
    result.dem = getMMC(fract1.dem, fract2.dem);
    result.numb = (result.dem / fract1.dem) * fract1.numb + (result.dem / fract2.dem) * fract2.numb;
  }

  return result;
}

Fraction operator-(const Fraction &fract1, const Fraction &fract2)
{
  Fraction result;
  if (fract1.dem == fract2.dem)
  {
    result.numb = fract1.numb - fract2.numb;
    result.dem = fract1.dem;
  }
  else
  {
    result.dem = getMDC(fract1.dem, fract2.dem);
    result.numb = (result.dem / fract1.dem) * fract1.numb - (result.dem / fract2.dem) * fract2.numb;
  }

  return result;
}

Fraction operator*(const Fraction &fract1, const Fraction &fract2)
{
  Fraction result;

  result.numb = fract1.numb * fract2.numb;
  result.dem = fract1.dem * fract2.dem;

  return result;
}

Fraction operator/(const Fraction &fract1, const Fraction &fract2)
{
  Fraction result;

  result.numb = fract1.numb * fract2.dem;
  result.dem = fract1.dem * fract2.numb;

  return result;
}

ostream &operator<<(ostream &os, const Fraction &output)
{
  os << " " << output.numb << "/" << output.dem;

  return os;
}

istream &operator>>(istream &is, Fraction &input)
{
  is >> input.numb >> input.dem;

  if (!is)
    input = Fraction();

  return is;
}

int main(void)
{
  Fraction a(17, 26);
  Fraction b(11, 27);
  Fraction c, d, e, f;

  cin >> c;
  cin >> d;
  cin >> e;
  cin >> f;

  cout << "Fraction a:" << endl;
  cout << a << endl;
  cout << "Fraction b:" << endl;
  cout << b << endl;
  cout << "Fraction c:" << endl;
  cout << c << endl;
  cout << "Fraction d:" << endl;
  cout << d << endl;
  cout << "Fraction e:" << endl;
  cout << e << endl;
  cout << "Fraction f:" << endl;
  cout << f << endl;
  cout << "Resultados:" << endl;
  cout << a + b;
  cout << c - d;
  cout << e * f;
  cout << e / f;
}