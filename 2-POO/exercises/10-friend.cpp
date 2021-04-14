// Exercicio Funcoes Virtuais e Amigas

// Considere a implementacao de uma classe base chamada Produto, contendo apenas os atributos de
// precco e nome do produto.
// Considere uma segunda classe chamada ComboProduto que contenha os atributos totalValor e quantidadeItens.
// Crie uma funcao amiga chamada combinarProdutosque, recebendo como parametro dois objetos da classe Produto, de como retorno um objeto da
// classe ComboProduto, cujo atributo totalValor contenha a soma dos valores dos dois produtos,
// descontados 15% e atribua 2 a quantidadeItens.
// No programa principal, realize os testes necessaarios para garantir que a funcao esta operando
// corretamente, garantindo que os valores sejam mostrados em tela.

#include <iostream>
using namespace std;

class Produto
{
private:
  double preco;
  string nome;

public:
  Produto(double preco, string nome) : preco(preco), nome(nome){};

  double getPreco() { return preco; }
  string getNome() { return nome; }
};

class ComboProduto : public Produto
{
private:
  double totalValor;
  int quantidadeItens;

public:
  ComboProduto(double totalValor, int quantidadeItens, double preco, string nome)
      : Produto(preco, nome), totalValor(totalValor), quantidadeItens(quantidadeItens){};

  friend ComboProduto combinarProdutos(Produto &p1, Produto &p2);
  double getTotalValor() { return totalValor; }
  int getQtdItens() { return quantidadeItens; }
};

ComboProduto combinarProdutos(Produto &p1, Produto &p2)
{
  double totalValor = p1.getPreco() + p2.getPreco();
  double descontado = totalValor - (totalValor * 0.15);
  string produtos = p1.getNome() + " & " + p2.getNome();
  ComboProduto combo(descontado, 2, totalValor, produtos);

  return combo;
};

int main()
{
  Produto p1(8000, "Macbook");
  Produto p2(5000, "Iphone");

  ComboProduto combo = combinarProdutos(p1, p2);
  cout
      << "Produtos: " << combo.getNome() << endl
      << "Valor: " << combo.getPreco() << endl
      << "Valor com Desconto: " << combo.getTotalValor() << endl
      << "Quantidade: " << combo.getQtdItens() << endl;
}
