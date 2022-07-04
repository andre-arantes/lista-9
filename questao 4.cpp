#include <iostream>
#include <string.h>
/* Dados os seguintes campos de uma classe Pessoa: nome, dia de  aniversário e mês de aniversário, desenvolver um programa que preencha um cadastro de 10 pessoas e grave em um arquivo (nome fornecido pelo usuário) cada um dos meses do ano e quem são as pessoas que fazem aniversário naquele mês, exibir também o dia. Na classe Pessoa, crie os métodos para manipular os atributos (construtores, assessores, métodos gerais). */

using namespace std;

class Pessoa {
  private: 
  char nome[20];
  int anivDia;
  int anivMes;
  public: 
  void defineData(char nome[20], int dia, int mes) {
    strcpy(this->nome,nome);
    anivDia = dia;
    anivMes = mes;
  }
  int getMes () { return anivMes; }

  void mostrarDados() {
    cout << nome << " nasceu no dia " << anivDia << "deste mês!" << "\n";
  }
};

int main() {
  char nome[20];
  int anivDia;
  int anivMes;
  Pessoa p[3];
  for(int i = 0; i < 3; i++) {
    cout << "\nnome: ";
    cin >> nome;
    cout << "dia do aniversário: ";
    cin >> anivDia;
    cout << "mês do aniversário: ";
    cin >> anivMes;
    getchar();
    p[i].defineData(nome, anivDia, anivMes);
  }

  for(int i = 0; i < 12 ;i++){
cout << "Quantidade de pessoas nascidas no mês " << i+1 <<":\n";
    for(int j = 0; j < 3; j++){
      if (i+1 == p[j].getMes()){
        p[j].mostrarDados();
      }
    }
  }  
  }
