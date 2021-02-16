# INTRODUÇÃO AO C++

## ENTRADA E SAÍDA

cin -> associado a entrada padrão (teclado)

cout -> associado a saída padrão (monitor)

cerr -> saída de mensagens de erro

##

## NAMESPACE - (espaço de nomes)

std::

Específica o uso de um nome definido no namespace std

Pode ser removido se o comando using for definido

## OPERADOR DE INSERÇÃO DE STREAM <<

#### ex: std:cout << "hello"

passa o valor "hello" para o objeto associado a saída

## CARACTER DE SCAPE

Um Caracter precedido por \ - Indica um caracter especial

![EscapeCommands](./../assets/1.png)

## COMANDO RETURN

Um dos caminhos para encerrar a execução do programa

Quando usando em main() o valor 0 indica que o programa terminou com sucesso

- return 0;

## FLOW DE EXECUÇÃO C++

![CodeExecution](./../assets/2.png)

## PROCESSO DE COMPILAÇÃO BÁSICA:

### `g++ nomeArquivo.cpp -o nomeArquivo.out`

### `./nomeArquivo.out`

Obs: Dependendo do compilador, ao invés de g++, utilize gcc no momento da compilação

## TIPOS PRIMITIVOS PRÉ DEFINIDOS, VARIÁVEIS E OPERADORES ARITMÉTICOS

Um tipo define a forma de armazenamento e conteúdo do dado. Traduzindo, em C++ você precisa especificar qual o tipo de dado que você esta trabalhando.

Uma variável é uma referência a uma instância de um dado tipo em memória.

#### Esses tipos podem ser:

primitivos: inteiros, caracteres...

abstratos: cout, cin... - objetos

### TIPOS DE DADOS PRIMITIVOS COMUNS:

int - números inteiros

char - caracteres

float - números em ponto flutuante de precisão simples

double - números em ponto flutuante de precisão dupla

bool - true or false ( 0 ou 1 )

### Variáveis são declaradas com um tipo e um nome

int var1;

int idade;

float nota1,nota2;

char meuNome;

#### Obs: Nomes de variáveis podem incluir letras, dígitos e underscores, mas NÃO podem começar com dígito e são case-sensitive.

### OPERADORES ARITMÉTICOS E ATRIBUIÇÕES:

#### + <- Operador de soma

#### - <- Operador de subtração

#### \* <- Operador de multiplicação

#### / <- Operador de divisão

      Divisão inteira trunca o resto
      7 / 2 é avaliado como 3
      7.0 / 2.0 é avaliado como 3.5

#### % <- Operator de módulo returna o resto da divisão

      7 % 5 é avaliado como 2

#### = <- operador de atribuição

#### Agrupamento de subexpressões

Em C++ usamos parênteses para agrupar subexpressõe, da mesma forma que fazemos com expressões algébricas

#### Regras de Procedência:

Operadores entre parênteses são avaliados primeiro, dos mais internos para os mais externos

Em seguida, multiplicação, divisão e módulo
Num mesmo nível, avaliados da esquerda para direita

Por fim, adição e subtração
Num mesmo nível, avaliados da esquerda para a direita

#### Obs: Algumas linguagens de programação possuem os operadores \*\* ou ^ para representar exponenciação. C++ não suporta esses operadores.

### Fluxo de Controle - Operadores relacionais, comandos de decisão e de repetição

![Operadores de Decisão](./../assets/3.png)

Os operadores relacionais sempre retornam um boolean verdadeiro (true) ou falso (false)

#### Comando IF:

- Se condição é true, corpo do if é executado
- Se condição é false, corpo do if não é executado

#### Comando IF ELSE:

- Se condição é true, corpo do if é executado
- Se condição é false, corpo do else é executado
#### Comando While:
- O comando while executa repetidamente os comandos definidos em ser corpo enquanto a condição for avaliada como verdadeira.
  
Eventualmente é necessário solicitar ao usuário que entre com dados, mas não é possível saber, a priori, a quantidade de valores que serão fornecidos.

É possível resolver isso aliando o comando while com o comando cin. Exemplo:

      While(std::cin >> valor){

      }

std::cin >> valor lê a próxima entrada  para a variável valor e retorna o operando da esquerda (std::cin)

#### Comando For:

O comando for executa repetidamente os comandos definidos em seu corpo enquanto a condição for avaliada como verdadeira. É usado principalmente quando sabemos de antemão quantas repetições serão necessárias

### Referências:
São tipos de dados que são definitos a partir de outros tipos.

  - Define um nome alternativo para uma variável;
  - Uma referência é definida associando um & ao nome de uma variável;

Exemplo: 

      int ival = 1024;

      int &refVal = ival; 

      refVal = 2; // ou seja, ival=2

      int umInt = refVal; // umInt = ival;

      int &refVal12; //erro, Toda referência deve ser inicializada;

### Ponteiros:

São tipos de dados, usados para "apontar" para outras variáveis;

- Entenda apontar como guardar o endereço em memória de outras variáveis;
- Ponteiros, assim como referências, são utilizados para acesso indireto ao conteúdo das variáveis;
  - Diferente de referências, ponteiros não precisam ser inicializados no momento de sua criação;
- São mais poderosos que referências, pois não são apenas um novo nome para uma variável;
- Ponteiros são declarados usando * junto ao nome da variável.

Exemplo: 
      
      double dval;
      
      double *pd = &dval; //pd guarda o endereço de dval
      
      double *pd2 = pd; // tanto pd quanto pd2 apontam para dval;
      
      int *pi = pd; // erro: tipos de pi ue pd são diferentes;

      int *pi2 = &dval; // erro: endereço de double atribuido ao ponteiro int


Um ponteiro pode estar nas seguintes situações:
   
   1. Apontando para uma variável de tipo correspondente;
   2. Apontando para a posição em memoria imediatamente após uma variável;
   3. Pode ser um ponteiro Null, indicando que não esta apontando para nenhuma variável;
   4. Pode ser um ponteiro inválido;

Para acessar o conteúdo apontado por um ponteiro usamos o operador de derreferenciação (*)

      int ival = 42;
      
      int *p = &ival; // p tem o endereço de ival

      cout << *p; //imprime 42

      int *p1 = nullptr;

      int *p2 = null; 

### Ponteiros de Ponteiros

Em geral, não há limites para o nível de indireção aplicada a ponteiros

      int ival = 1024;
      int *pi = &ival;
      int **ppi = &pi;

![Ponteiros](./../assets/4.png )

### Referências para ponteiros

É possível também criar referências para ponteiros. Tal como para outras variáveis, a referência passa a ser um outro nome para o ponteiro.

      inti = 42;
      
      int *p;
      
      int *&r = p; //r é uma referência para o ponteiro p

      r = &i; //equivalente a fazer p apontar para i

      *r = 10; //equivalent a derreferenciar p, logo atribui 10 a variavel i

### Mais sobre ponteiros:

[![IMAGE ALT TEXT](https://i.ytimg.com/vi/Agm01m4s3wo/hq720.jpg?sqp=-oaymwEcCOgCEMoBSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLAc4lmmlOcn7WeC1unr3TqSks1Jcwstyle=centerme)](https://www.youtube.com/watch?v=Agm01m4s3wo "Ponteiros")

### Qualificador const

Tornar o valor de uma variável imutável, isto é, constante.
Quando este qualificador é usado a variável deve ser iniciada obrigatoriamente

      const int i = get_size(); //inicializada em runtime
      const int j = 42; //inicializada em compilacao
      const int k; //erro, sem inicialização

O qualificador const, quando usado com ponte4iros leva a três possíveis situações.

1. Ponteiro não constante apontando para variável constante;
2. Ponteiro constante apontando para variável constante;
3. Ponteiro constante apontando para variável não constante;

### Type Aliases (apelidos para tipos)

Define um nome que serve como sinônimo para um tipo. Duas possibilidaes

- Com typedef:
  
      typedef double wages; //wages se torna sinonimo de double

- Com using:

      using wages = double;


