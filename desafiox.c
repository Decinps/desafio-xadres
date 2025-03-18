#include <stdio.h>
int main (){

    int i, j, k;
j = 0;
k = 0;

    printf("Mover torre para direita\n\n");
    
// move torre 5 casas para a direita.
    for ( i = 0; i < 5; i++)
    {
        printf("DIREITA\n");
    }

    printf("\n");
//move o bispo para a diagonal direita.   
         printf("Mover bispo para diagonal direita\n\n");
    
    while (j < 5)
    {
        printf("Cima direita \n");

        j++;
    }

    printf("\n");    
   
         printf("Mover rainha para deireita oito casas\n\n");

 //move a rainha para a direita 8 vezes.
    do
    {
        printf("Direita\n");

        k++;
    } while (k <= 7);
    
    
}
