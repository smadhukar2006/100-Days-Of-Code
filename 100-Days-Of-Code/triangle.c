#include <stdio.h>
 int main()
 {
    float a,b,c;
    printf("Enter the length of side a:");
    scanf("%f", &a);
    printf("Enter the length of side b:");
    scanf("%f", &b);
    printf("Enter the length of side c:");
    scanf("%f", &c);

    if (a+b>c && a+c>b && b+c>a){
    if (a==b && b==c){
        printf("The triangle is Equilateral.\n");
    } else if (a==b || b==c || a==c){
        printf("The triangle is Isosceles.\n");
    }else{
    printf("The triangle is Scalene.\n");
    }

 }else{
    printf("No triangle formed.\n");
}
return 0;
 }