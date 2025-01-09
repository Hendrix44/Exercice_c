#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,f=1;
    printf("Donnez votre nombre pour que je trouve la factoriel ");
    scanf("%d",&n);

    for ( int i = 1; i <= n; i++)
    {
        f =f *i ;
    }
    printf(" La factoriel de %d nous donne  %d",n,f);

    return 0;
}
