#include <stdio.h>

int main()
{
    int tab[10];

     // Lecture des valeurs
    for (int i = 0; i < 10; i++) {
        printf("Entrer le nombre %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    //affiche les nombre pairs de monn tableau
    printf("Nombres pairs:\n");
    for (int i = 0; i < 10; i++) {
        if (tab[i] % 2 == 0) {
            printf("%d ", tab[i]);
        }
    }
// affiche les nombre impairs de mon tableau
    printf("\nNombres impairs:\n");
    for (int i = 0; i < 10; i++) {
        if (tab[i] % 2 != 0) {
            printf("%d ", tab[i]);
        }
    }



    return 0;
}
