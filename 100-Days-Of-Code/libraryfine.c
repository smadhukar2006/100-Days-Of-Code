#include <stdio.h>
int main()
{
    int latedays;
    int fine = 0;
    printf("Enter number of late days:");
    scanf("%d", &latedays);
    if (latedays <= 0){
        printf("No fine. Book returned on time.\n");
    } else if (latedays <=5){
        fine = latedays * 2;
        printf("Fine: rs %d\n", fine);
    }else if (latedays <=10){
        fine = (5 * 2) + ((latedays - 5)* 4);
        printf("Fine: rs %d\n",fine);
    }else if (latedays <=30){
        fine = (5 * 2) + (5 * 4) + ((latedays - 10)* 6);
        printf("Fine: rs %d\n",fine);
    }else{
            printf("Membership Cancelled due to excessive delay.\n");
        }
        return 0;
}