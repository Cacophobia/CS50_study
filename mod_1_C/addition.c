#include <cs50.h>
#include <stdio.h>
///Eu sei que tecnicamente isso não funciona mas eu só to copiando oq o professor escreve.
int main(void)
{
  ///Pega dois valores X e Y do user. Ele SÓ aceita números inteiros.
  int x = get_int("x: ");
  int y = get_int("y: ");
  
  ///Soma e mostra na tela
  printf("A soma deles da: %i\n", x + y);

  ///Divide e mostra na tela (evitando o arredondamento).
  float z = (float) x / (float) y;  
  printf("A divisão deles da: %f\n", z);
}
