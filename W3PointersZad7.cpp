#include <stdio.h>
#include <iostream>

int main()
{
    int elementy, i, a, Tab[25];
    printf("Podaj liczbe elementow w tablicy ");
    scanf_s("%d", &elementy);
    for (i = 0; i <= elementy-1; i++) {
        printf("Podaj liczbe nr %d ", i);
        scanf_s("%d", &Tab[i]);
    }
    for (i = 0; i <= elementy - 1; i++) {
        printf("Liczba nr %d = %d\n", i, Tab[i]);
    }
}
