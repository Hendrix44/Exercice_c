#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Entrer une valeur ");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("Cette valeur est pair");
    }else
    {
        printf("Cette valeur est impair");
    }
    

    
    return 0;
}
