#include <stdio.h>

int main()
{
    int tableau[5] = {101, 20, 35, 40, 70}; 
    int *pointeur = tableau;               

    printf("Les éléments du tableau sont :\n");
    
    // Parcours du tableau avec le pointeur
    for (int i = 0; i < 5; i++) {
        printf("Élément %d : %d\n ", i + 1, *(pointeur + i));
    }

    return 0;
}