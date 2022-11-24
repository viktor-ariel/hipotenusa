#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
    float cat1, cat2, hip;

    system("cls");

    printf("Qual o cateto 1 ? ");
    scanf("%f", &cat1);
    system("cls");

    printf("Qual o cateto 2 ? ");
    scanf("%f", &cat2);
    system("cls");

    hip = sqrt((pow(cat1,2) + pow(cat2,2)));
    printf ("Sua hipotenusa e: %.2f \n \n", hip);

    system("pause");
}
