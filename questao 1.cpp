#include <string.h>
#include <iostream>

/* Crie uma classe Equipamento com o atributo ligado (tipo boolean) e com os métodos liga e desliga. O método liga() torna  o atributo ligado true e o método desliga() torna o atributo ligado false. Crie também uma classe EquipamentoSonoro que herda as características de Equipamento e que possui os atributos // volume (tipo short) que varia de 0 a 10 // e stereo (tipo boolean). A classe ainda deve possuir métodos get para retornar valor de cada atributo e set para gravar um valor em um atributo. Crie também os métodos mono() e stereo(). O método mono() torna o atributo stereo falso e o método stereo() torna o atributo stereo verdadeiro. Ao ligar o EquipamentoSonoro através do método liga, seu volume é automaticamente ajustado para 5. */

using namespace std;
class Equipamento {
  public: 
  bool ligado;
  void liga() {
    printf("O equipamento está ligado!\n");
    ligado = true;
  };
  void desliga() {
    printf("O equipamento está desligado!");
    ligado = false;
  }
  Equipamento () {  }
};

class EquipamentoSonoro : public Equipamento {
  public:
  short volume;
  bool stereo;
  void setVolume (short volume) {this->volume = volume;}
  short getVolume () {
    return volume;
  }
  void setStereo (bool stereo) {this->stereo = stereo;}
  bool getStereo () {
    return stereo;
  }
  void mono () {
    stereo = false;
  }
   void estereo () {
     stereo = true;
   }
  EquipamentoSonoro () : Equipamento () { volume = 5; }
};

int main() {
  EquipamentoSonoro JBL;
  JBL.getVolume();
  printf("%i\n", JBL.getVolume());
  JBL.liga();
  JBL.desliga();
}
