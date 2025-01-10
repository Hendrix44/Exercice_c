#include <stdio.h>
#include <pthread.h>

// F qui imprime "Bonjour" 100 fois
void* bonjour(void* arg) {
    for (int i = 0; i < 100; i++) {
        printf("Bonjour\n");
    }
    return NULL;
}

// imprime "Au revoir" 100 fois
void* au_revoir(void* arg) {
    for (int i = 0; i < 100; i++) {
        printf("Au revoir\n");
    }
    return NULL;
}

int main() {
    pthread_t t1, t2;

    // Création du premier thread (adresse duthread, attributs, fonction à exécuter, arguments de la fonction)
    if (pthread_create(&t1, NULL, bonjour, NULL) != 0) {
        printf("Erreur lors de la création du thread bonjour.\n");
        return 1;
    }

    // thread qui exécutera la fonction au_revoir
    if (pthread_create(&t2, NULL, au_revoir, NULL) != 0) {
        printf("Erreur lors de la création du thread au_revoir.\n");
        return 1;
    }

    // Attente que les deux threads finissent leur exécution
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    printf("Tous les threads sont terminés.\n");
    return 0;
}
