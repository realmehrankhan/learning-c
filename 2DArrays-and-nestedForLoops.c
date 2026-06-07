#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arraynums[4][3] = {

                {2, 3, 4},
                {3, 9, 7},
                {4, 2, 0},
                {1, 8, 5}
    };

    int i; int j;
    for(i = 0; i < 4; i++){
            for(j = 0; j < 3; j++){
                printf("%d, ", arraynums[i][j]);
            }
            printf("\n");
    }

    return 0;
}
