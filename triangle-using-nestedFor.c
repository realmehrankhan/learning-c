#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i; int j;
    for(i = 0; i <= 25; i++){
            for(j = 0; j < i; j++){
                printf("*");
            }
            printf("\n");
    }

    return 0;
}
