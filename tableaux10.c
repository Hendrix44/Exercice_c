#include <stdio.h>

int main()
{
    int tab[10] = {62, 12, 1, 1, 3, 5, 7, 9, 11, 13};
    int freq[101] = {0}; // Tableau pour stocker les fréquences (valeurs entre 0 et 100)

    // Calcul des fréquences
    for (int i = 0; i < 10; i++) {
        if (tab[i] >= 0 && tab[i] <= 100) { // Vérifie si le nombre est dans l'intervalle [0, 100]
            freq[tab[i]]++;
        }
    }

    // Affichage de l'histogramme
    printf("Histogramme des fréquences :\n");
    for (int i = 0; i <= 100; i++) {
        if (freq[i] > 0) { // Affiche uniquement les fréquences non nulles
            printf("%d : ", i);
            for (int j = 0; j < freq[i]; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
