#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

class ObjetoGeometrico
{
private:
  float priDimensao, secDimensao;

public:
  ObjetoGeometrico(float d1, float d2) : priDimensao(d1), secDimensao(d2) {}

  float getPriDimensao() { return priDimensao; }
  float getSecDimensao() { return secDimensao; }

  void setDimensao1(float priDimensao) { this->priDimensao = priDimensao; }
  void setDimensao2(float secDimensao) { this->secDimensao = secDimensao; }

  virtual float calculaPerimetro() { return priDimensao + secDimensao; }
  virtual float calculaArea() { return priDimensao * secDimensao; }
};

class Triangulo : public ObjetoGeometrico
{
private:
  float triDimensao;

public:
  Triangulo(float d1, float d2, float d3) : ObjetoGeometrico(d1, d2),
                                            triDimensao(d3) {}

  float getDimensao3() { return triDimensao; }

  void setDimensao3(float triDimensao) { this->triDimensao = triDimensao; }

  float calculaPerimetro() override { return getPriDimensao() + getSecDimensao() + triDimensao; }
  float calculaArea() override
  {
    float s = calculaPerimetro() / 2;
    float expresssao = s * (s - getPriDimensao()) * (s - getSecDimensao()) * (s - triDimensao);
    return sqrt(expresssao);
  }
};

class Circulo : public ObjetoGeometrico
{
private:
  float raio;

public:
  Circulo(float d1, float d2, float raio) : ObjetoGeometrico(d1, d2),
                                            raio(raio) {}

  float getRaio() { return raio; }

  void setRaio(float variable) { raio = variable; }

  float calculaPerimetro() override { return 2 * 3.1415 * raio; }
  float calculaArea() override { return 3.1415 * (pow(raio, 2)); }
};

class Retangulo : public ObjetoGeometrico
{
public:
  Retangulo(float d1, float d2) : ObjetoGeometrico(d1, d2) {}

  float calculaPerimetro() override { return (getPriDimensao() * 2) * (getSecDimensao() * 2); }
};

int main()
{
  Triangulo t1(2, 5, 5);
  Retangulo r1(10, 4);
  Circulo c1(2.2, 4.3, 5);

  vector<ObjetoGeometrico *> formas;

  formas.push_back(&t1);
  formas.push_back(&r1);
  formas.push_back(&c1);

  for (auto f : formas)
  {
    float area = f->calculaArea();
    float perimetro = f->calculaPerimetro();
    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << "\n"
         << endl;
  }
}
