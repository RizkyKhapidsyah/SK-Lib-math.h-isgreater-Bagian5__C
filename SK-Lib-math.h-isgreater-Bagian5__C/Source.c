#include <stdio.h>
#include <math.h>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    printf("isgreater(2.0,1.0)      = %d\n", isgreater(2.0, 1.0));
    printf("isgreater(1.0,2.0)      = %d\n", isgreater(1.0, 2.0));
    printf("isgreater(INFINITY,1.0) = %d\n", isgreater(INFINITY, 1.0));
    printf("isgreater(1.0,NAN)      = %d\n", isgreater(1.0, NAN));

    _getch();
    return 0;
}