#include <stdio.h>

int main()
{
    int nombre = 10;
    int *pointeur = &nombre; // Déclaration d'un pointeur vers cet entier

   
    printf("Valeur de l'entier avant modification : %d\n", nombre);

    // Modification de la valeur de l'entier via le pointeur
    *pointeur = 20;

  
    printf("Valeur de l'entier après modification : %d\n", nombre);

    return 0;
}
