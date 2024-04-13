#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x = 0;

    printf("Digite a sua idade: ");
    scanf("%d", &x);

    printf("A sua idade eh: %d\n", x);

    if(x >= 18)
    {
        printf("Voce eh maior de idade.\n");
    } else {
        printf("Voce é menor de idade.\n");
    }

    return 0;
}