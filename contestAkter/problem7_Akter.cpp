#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int Binary[10],number,i,numberPrint;    
printf("Contestent: Fatema Akter \n"); 
printf("Enter the integer number to convert: ");    
scanf("%d",&number);   
numberPrint=number;
if(number<255)
{
    for(i=0;number>0;i++)    
    {    
        Binary[i]=number%2;    
        number=number/2;    
    }    
    printf("\nBinary of the given integer number %d =",numberPrint);    
    for(i=i-1;i>=0;i--)    
    {    
        printf("%d",Binary[i]);    
    }   
}
else
{
    printf("The input number is >=255");
}
return 0;  
}   
