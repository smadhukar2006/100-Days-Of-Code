#include <stdio.h>
int main()
{
   int month;
  printf("Enter a month (1-12):");
  scanf("%d", &month); 
  switch (month) {
    case 1:
    printf("January has 31 days.\n");
    break;
    case 2:
     printf("February has 29 days and is a leap year.\n");
    break;
     case 3:
    printf("March has 31 days.\n");
    break;
     case 4:
    printf("April has 30 days.\n");
    break;
     case 5:
    printf("May has 31 days.\n");
    break;
     case 6:
    printf("June has 30 days.\n");
    break;
     case 7:
    printf("July has 31 days.\n");
    break;
     case 8:
    printf("August has 30 days.\n");
    break;
     case 9:
    printf("September has 31 days.\n");
    break;
     case 10:
    printf("October has 30 days.\n");
    break;
     case 11:
    printf("November has 31 days.\n");
    break;
     case 12:
    printf("December has 30 days.\n");
    break;
    default:
    printf("Invalid input! Please enter a month between 1 and 12.\n ");
    return 0;


  }
}
