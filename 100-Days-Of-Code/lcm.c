#include <stdio.h>


int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, hcf, lcm;

   
    printf("Enter two positive integers: ");
    sca
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    hcf = findHCF(num1, num2);
    lcm = (num1 * num2) / hcf;

   
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}