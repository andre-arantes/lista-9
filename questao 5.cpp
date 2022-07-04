#include <iostream>
#include <string.h>
using namespace std;

/* Uma pessoa criou um arquivo (nome fornecido pelo usuário) que contém as
 * informações de 15 eletrodomésticos: nome da loja, telefone e preço de cada
 * eletrodoméstico. Elabore uma classe chamada Eletrodomestico com esses
 * atributos e métodos para manipulá-los (construtores, assessores, exibição).
 * Desenvolva um programa que permita ler os dados deste arquivo e preencher um
 * vetor com  objetos do tipo Eletrodomestico. O programa também deve calcular e
 * gravar em um outro  arquivo (nome  fornecido  pelo  usuário) a média dos
 * preços cadastrados e uma relação contendo o nome e o telefone das lojas cujo
 * preço estava abaixo da média. */

class eletrodomestico {
private:
  char nome[30];
  double preco;
  int telefone;

public:
  void getInfo() {
    cout << "\nDigite o nome da loja: ";
    cin >> nome;

    cout << "Digite o telefone da loja: ";
    cin >> telefone;

    cout << "Digite o preço do eletrodoméstico: ";
    cin >> preco;
  }

  double getPreco() { return preco; }

  void getMedia() {
    cout << "\nA loja " << nome << ", de telefone " << telefone
         << " está abaixo da média de preços.";
  }
};

int main() {
  int soma = 0;
  int media;
  int num = 3;
  eletrodomestico eletro[num];
  for (int i = 0; i < num; i++) {
    cout << "\nPessoa " << (i + 1);
    eletro[i].getInfo();
  }
  for (int i = 0; i < num; i++) {
    soma += eletro[i].getPreco();
  }
  media = soma / num;
  cout << "\n"
       << "A média do preço dos eletrodomésticos é: " << media;
  for (int i = 0; i < num; i++) {
    if (eletro[i].getPreco() < media) {
      eletro[i].getMedia();
    }
  }
}
