#include <stdio.h>
int main()
{
    int a;
    float b;
    double c;
    

    printf("Enter text here: ");

    scanf("%d%f%lf", &a, &b, &c);

    printf("You entered %d , %f and %lf", a, b, c);
    return 0;
}