#include <stdio.h>

int main() {
    int i, j, space, stars;

    for (i = 0; i < 5; i++) {
        
        for (space = 0; space < i; space++) {
            printf(" ");
        }
     
        for (stars = 0; stars < 5 - i; stars++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}