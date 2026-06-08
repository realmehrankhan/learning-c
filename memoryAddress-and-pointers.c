#include <stdio.h>
#include <stdlib.h>

int main()
{
    int variable = 42;
    int *pVariable = &variable;
    double random = 3.4;
    double *pRandom = &random;

    printf("%p\n", &variable);
    printf("%p\n", &random);
    printf("%d\n", *&variable);
    printf("%f\n", *&random);
    return 0;
}
