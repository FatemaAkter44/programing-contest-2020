#include <stdio.h>
int main()
{
    int numberOfHeads,numberOfLegs,numberOfChickens,numberOfRabbits  ;
    
    printf("contestent: Fatema Akter\n");
    printf("Enter the total number of heads: ");
    scanf("%d",&numberOfHeads);
    printf("Enter the total number of legs: ");
    scanf("%d",&numberOfLegs);
    numberOfRabbits=(numberOfLegs/2)-numberOfHeads;
    numberOfChickens=numberOfHeads-numberOfRabbits;
    printf("The number of chickens in the cage =%d",numberOfChickens);
    printf("The number of rabbits in the cage  =%d",numberOfRabbits);
    return 0;
}
