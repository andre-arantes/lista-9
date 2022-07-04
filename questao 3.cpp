#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

/* Elaborar uma classe Pessoa (código, nome, idade, endereço, número, complemento) e, após cadastrar os dados de várias pessoas em um vetor de objetos desta classe, gravar o conteúdo do vetor no arquivo cujo nome deve ser fornecido pelo usuário. Na classe Pessoa, crie os métodos para manipular os atributos (construtores, assessores, métodos gerais).*/

class Pessoa {
  public:
  int codigo;
  int idade;
  char nome[50];
  char rua[50];
  int num;
  int complemento;
  Pessoa (int a, int b, char *c, char *d, int e, int f) {
    codigo = a;
    idade = b;
    strcpy (nome, c);
    strcpy (rua, d);
    num = e;
    complemento = f;
  }
};

int main() {
  int g, h;
  char i[50], j[50];
  int k, l;
  FILE *arqpessoa;
  arqpessoa = fopen("Dados.txt", "r");
  fscanf(arqpessoa, "%d %d %s %s %d %d", &g, &h, i, j, &k, &l);
  Pessoa p1 (g, h, i, j, k, l);
  printf("%s", p1.nome);  
  printf("%s", p1.rua); 
  printf("%d", p1.num);  
  printf("%d", p1.codigo);  

}

// fopen não funciona com string
