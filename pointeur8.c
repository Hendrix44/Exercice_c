#include <stdio.h>

int main()
{
    int tab[8] = {15, 22, 7, 41, 56, 3, 10, 33};  
    int *ptr = tab;  
    int plus_grand, plus_petit;

    // Initialiser les variables avec la première valeur du tableau
    plus_grand = *ptr;
    plus_petit = *ptr;

    // Parcourir le tableau à l'aide du pointeur pour trouver le plus grand et le plus petit
    for (int i = 0; i < 8; i++) {
        if (*(ptr + i) > plus_grand) {
            plus_grand = *(ptr + i);  
        }
        if (*(ptr + i) < plus_petit) {
            plus_petit = *(ptr + i);  
        }
    }

    // Affichage des résultats
    printf("Le plus grand élément : %d\n", plus_grand);
    printf("Le plus petit élément : %d\n", plus_petit);

    return 0;
}
