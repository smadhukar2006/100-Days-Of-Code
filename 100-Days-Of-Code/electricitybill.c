#include <stdio.h>
int main()
{
int unit,bill;
printf("Enter the number of units consumed:");
scanf("%d", &unit);
if (unit <=100)
{
    bill = unit * 5;
printf("The Electricity Bill is %d\n", bill); 
}

else if (unit <=200)
{
    bill = (100 * 5) + (unit - 100)*7;
printf("The Electricity Bill is %d\n", bill);
}
else if (unit <=300)
{
    bill = ( (100 * 5) + (100 * 7) + (unit - 200)*10);
printf("The Electricity Bill is %d\n", bill);
}
else
{
bill = ( (100 * 5) + (100 * 7) + (100  * 10) + (unit - 300)*12);
printf("The Electricity Bill is %d\n", bill);
}
return 0;
}