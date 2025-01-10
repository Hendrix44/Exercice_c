#include <stdio.h>
#include <pthread.h>

// Variables globales pour compter les messages
int compteur_bonjour = 0;
int compteur_au_revoir = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

// Fonction exécutée par le premier thread
void* bonjour(void* arg) {
    for (int i = 0; i < 100; i++) {
        printf("Bonjour\n");
        pthread_mutex_lock(&mutex);
        compteur_bonjour++;
        pthread_mutex_unlock(&mutex);
    }
    printf("Thread Bonjour ests terminé.\n");
    return NULL;
}

// Fonction exécutée par le second thread
void* au_revoir(void* arg) {
    for (int i = 0; i < 100; i++) {
        printf("Au revoir\n");
        pthread_mutex_lock(&mutex);
        compteur_au_revoir++;
        pthread_mutex_unlock(&mutex);
    }
    printf("Thread Au revoir  est terminé.\n");
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    // Création des threads
    pthread_create(&thread1, NULL, bonjour, NULL);
    pthread_create(&thread2, NULL, au_revoir, NULL);

    // Attente de la fin des threads
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    // Affichage des compteurs
    printf("Messages Bonjour : %d\n", compteur_bonjour);
    printf("Messages Au revoir : %d\n", compteur_au_revoir);
    printf("Tous les threads sont terminés.\n");

    return 0;
}
