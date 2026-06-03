#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char Name[] = "Mehran";
    int Age = 17;

    printf ("%s says hello world \n", Name);
    printf("and he was perfectly fine with being %i \n", Age);

    Age = 27;

    printf("he also loved being %i \n", Age);
    printf("i am trying to add 3 + 6 which is %d\n", 3 + 6);

    /* i am trying out the math functions*/

    printf(" the cube of 37 is %f\n", pow(37, 3)); // i included math.h

    const int ADD1 = 20;
    const int ADD2 = 30;

    printf("the sum of 20 and 30 is %d\n", ADD1 + ADD2);

    int mult = 10;
    int mult2 = 20;

    printf("the product of 10 and 20 is %d\n", mult*mult2);

    return 0;
}
