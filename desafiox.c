#include <stdio.h>
int main (){

    int i, j, k, l, c;
j = 0;
k = 0;
l = 0;
c = 1;
    printf("Mover torre para direita\n\n");
    
// move torre 5 casas para a direita.
    for ( i = 0; i < 5; i++)
    {
        printf("Direita\n");
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

        printf("mover cavalo para 2 casas para baixo e uma para esquerda\n\n");

       while (l--);
       {
        for ( c = 0; c < 2; c++)
        {
            printf("Baixo\n");
        }
            printf("Esquerda\n");
       }
       
    
    
}
