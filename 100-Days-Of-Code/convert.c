#include <stdio.h>

int main() {
    char str[] = "hello, shashank!";
    int i = 0;

    while (str[i] != '\0') {
       
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  
        }
        i++;
    }

    printf("Uppercase string: %s\n", str);
    return 0;
}