#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[10] = {62, 12, 86, 1, 3, 5, 7, 9, 11, 13};
    int temp_tableau[10];  // Tableau temporaire pour l'inversion


    // Affiche le tableau normal
    printf("Tableau normal : ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", tab[i]);
    }
    


    // Inverse le tableau en utilisant une variable temporaire
    for (int i = 0; i < 10; i++) {
        temp_tableau[i] = tab[9 - i];  // Copie les éléments dans l'ordre inversé
    }


    // Copie le tableau inversé dans le tableau d'origine
    for (int i = 0; i < 10; i++) {
        tab[i] = temp_tableau[i];
    }


    // Affiche le tableau inversé
    printf("\nTableau inversé : ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", tab[i]);
    }
    

    return 0;
}
