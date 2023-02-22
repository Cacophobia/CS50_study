#include <cs50.h>
#include <stdio.h>

int main(void)
{
  ///Pede o X e o Y pro user.
  int x = get_int("x: ");
  int y = get_int("y: ");
  ///Compara X e Y.
  if (x < y)
  {
    printf("X is less than Y\n");
  }
    else if (x > y)
    {
      printf("X is greater than Y\n");
    }
    else
    {
        printf("X is equal to Y\n");
    }
///Agora vou ver se o user concorda.
char c = get_char("Do you agree? ");

if (c == 'y' || c = 'Y')
  {
    printf("Ok.\n");  
  }  
  else if(c == 'n' || c == 'N')
  {
    printf("Not Ok.\n");
  }
  else
  {
    printf("wtf XD\n");
  }
  
}
