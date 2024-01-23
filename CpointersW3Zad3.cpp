#include <iostream>

int main()
{
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';
    printf("Address of m = %p\n", &m);
    printf("Address of m = %p\n", &fx);
    printf("Address of m = %p\n", &cht);
    printf("Value at address of m = %d\n", *&m);
    printf("Value at address of m = %f\n", *&fx);
    printf("Value at address of m = %c\n", *&cht);
    int *pt1;
    float *pt2;
    char *pt3;
    pt1 = &m;
    pt2 = &fx;
    pt3 = &cht;
    printf("Address of m = %p\n", pt1);
    printf("Address of m = %p\n", pt2);
    printf("Address of m = %p\n", pt3);
    printf("Value at address of m = %d\n", *pt1);
    printf("Value at address of m = %f\n", *pt2);
    printf("Value at address of m = %c\n", *pt3);
}
