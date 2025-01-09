#include <stdio.h>

int main()
{
    int tab[5]={1,2,3,4,5};
    int tab2[5]={6,7,8,9,10};
    int res[5];


// creation pointeur pour chaque tableau
    int *p1 = tab;
    int *p2 = tab2;
    int *p3 = res;

// addition des elements des deux tableaux avec le i pour la boucle
    for (int i = 0; i < 5; i++)
    {
        *(p3+i) = *(p1+i) + *(p2+i);
       
    }
     printf("Tableau 1 : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p1 + i));  // Affichage des éléments de tableau1 via le pointeur
    }

    printf("\nTableau 2 : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p2 + i));  // Affichage des éléments de tableau2 via le pointeur
    }

    printf("\nRésultat de l'addition : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p3 + i));  // Affichage des éléments du tableau résultat
    }

    printf("\n");
    
    return 0;
}
