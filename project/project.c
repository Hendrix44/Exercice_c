#include <stdio.h>
#include <string.h>

#define MAX_RESERVATIONS 100

// Structure pour une réservation
typedef struct {
    char nom[50];
    int tailleTable;  // Nombre de personnes
    char date[20];    // Date de réservation
    char heure[10];   // Heure de réservation
} Reservation;

Reservation reservations[MAX_RESERVATIONS];
int nbReservations = 0;




int main() {
    

    return 0;
}
