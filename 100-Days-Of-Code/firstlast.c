#include <stdio.h>
#include <math.h>

int main() {
    int num, digits = 0, first, last, power, middle, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

   
    if (num >= 0 && num < 10) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    int temp = num;
    last = temp % 10;

   
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;
    power = (int)pow(10, digits);

    middle = (num % power) / 10;

    
    swapped = last * power + middle * 10 + first;

    printf("Swapped number: %d\n", swapped);

    return 0;
}