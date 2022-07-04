#include <iostream>
#include <string.h>
using namespace std;
/*
Crie uma classe Pessoa com atributos: nome e sobrenome.
A classe ainda deve conter os seguintes métodos:

- Um construtor com os dados de nome e sobrenome para os atributos.
- getNomeCompleto() que não possui parâmetros de entrada e que escreve a
concatenação do atributo nome com o atributo sobrenome;

Implemente também uma subclasse de Pessoa, chamada Funcionario. A classe
Funcionario deve  ter  os  atributos  matricula  (tipo  int)  e  salario  (tipo
double),  com  um  construtor  que invoca o construtor da superclasse e
acrescenta os valores aos seus atributos. O salário de um funcionário jamais
poderá ser negativo. Todo funcionário recebe seu salário em duas parcelas, sendo
60% na primeira parcela e 40% na segunda parcela. Assim, escreva os métodos:

- getSalarioPrimeiraParcela() que retorna o valor da primeira parcela do
salário;
- getSalarioSegundaParcela() que retorna o valor da segunda parcela do salário.

Crie uma subclasse de Funcionario, chamada Professor. Todo professor recebe seu
salário em uma única parcela. Assim, devem-se sobrescrever os métodos
getSalarioPrimeiraParcela() e getSalarioSegundaParcela(). O método
getSalarioPrimeiraParcela() da classe Professor deve retornar o valor integral
do salário do professor e o método getSalarioSegundaParcela() do professor deve
retornar o valor zero. Crie também um construtor que invoca o construtor da
superclasse.
*/

class Pessoa {
public:
  char nome[20];
  char sobrenome[30];
  Pessoa(char *n, char *s) {
    strcpy(nome, n);
    strcpy(sobrenome, s);
  }
  char *getNomeCompleto() { return strcat(nome, sobrenome); }
};

class Funcionario : public Pessoa {
public:
  int matricula;
  double salario;
  Funcionario(char *n, char *s) : Pessoa(n, s) {}
  void setSalario(double s) { salario = s; }
  double getSalarioPrimeiraParcela() { return salario * 0.6; }
  double getSalarioSegundaParcela() { return salario * 0.4; }
};

class Professor : public Funcionario {
public:
  double getSalarioPrimeiraParcela() { return salario; }
  double getSalarioSegundaParcela() { return 0; }
  Professor(char *n, char *s) : Funcionario(n, s) {}
};

int main() {
  double valor;
  Funcionario f("Andre", "Arantes");
  f.setSalario(1000);
  valor = f.getSalarioPrimeiraParcela();
  printf("%.2lf\n", valor);
  Professor p("Fulano", "Da Silva");
  p.setSalario(2000);
  valor = p.Funcionario::getSalarioSegundaParcela();
  printf("%.2lf", valor);
}
