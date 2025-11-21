#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float d, r1, r2;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\nRoot 2 = %.2f\n", r1, r2);
    }
    else if (d == 0)
    {
        r1 = r2 = -b / (2 * a);
        printf("Roots are real and same.\n");
        printf("Root 1 = Root 2 = %.2f\n", r1);
    }
    else
    {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-d) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2f\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2f\n", realPart, imagPart);
    }
    return 0;

}