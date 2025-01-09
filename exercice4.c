#include <stdio.h>
#include <stdlib.h>




int main()
{
    int sum ;
    int avg;
    int tab[10];
     // Lecture des valeurs
    for (int i = 0; i < 10; i++) {
        printf("Entrer le nombre %d : ", i + 1);
        scanf("%d", &tab[i]);
    }
    // find the average of my tab
    for (int i = 0; i < 10; i++)
    {
        sum+= tab[i];
        
    }
    avg = sum/10;
    
    return 0;
}
