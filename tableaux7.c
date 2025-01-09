#include <stdio.h>

int main()
{
    int tab[10];

     // Lecture des valeurs
    for (int i = 0; i < 10; i++) {
        printf("Entrer le nombre %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

   // faire une rotationa droite
   for (int i = 0; i < 10; i++)
   {
         int temp = tab[9];
         for (int j = 9; j > 0; j--)
         {
              tab[j] = tab[j-1];
         }
         tab[0] = temp;
     
   }
   


}