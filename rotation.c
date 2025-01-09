#include <stdio.h>

int main()
{
    int tab[10];

     // Lecture des valeurs
    for (int i = 0; i < 10; i++) {
        printf("Entrer le nombre %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    // affiche tableau avant rotation
    printf("Tableau avant rotation : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", tab[i]);
    }
    

   // faire une rotationa droite
    int temp = tab[9]; // Sauvegarder le dernier élément
    for (int j = 9; j > 0; j--) {
        tab[j] = tab[j - 1];
    }
    tab[0] = temp;


    // affiche tableau après rotation
    printf("\nTableau après rotation : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", tab[i]);
    }

   printf("\n");

    return 0;



}