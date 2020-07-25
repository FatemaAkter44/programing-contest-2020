#include<stdio.h> 
int main(){  
char ch;
int number,Binary[10]={0},hammingCode[14],i,numberPrint;
printf("Contestant: Fatema Akter\n");
printf("Enter the character:");
scanf("%c",&ch);
number=ch;
numberPrint=number;
for(i=0;number>0;i++)    
{    
    Binary[i]=number%2;    
    number=number/2;    
}    
    printf("\nBinary of the given character %c =",numberPrint);    
    for(i=i-1;i>=0;i--)    
    {    
        printf("%d",Binary[i]);    
    } 

printf("\n");   
int h7,h3,h1,h0;
hammingCode[11]=Binary[7];
hammingCode[10]=Binary[6];
hammingCode[9]=Binary[5];
hammingCode[8]=Binary[4];
h7=hammingCode[11]+hammingCode[10]+hammingCode[9]+hammingCode[8];
if(h7%2==0) 
hammingCode[7]=0;
else 
hammingCode[7]=1;
hammingCode[6]=Binary[3];
hammingCode[5]=Binary[2];

h3=hammingCode[11]+hammingCode[6]+hammingCode[5]+hammingCode[4];
if(h3%2==0) 
hammingCode[3]=0;
else 
hammingCode[3]=1;

hammingCode[4]=Binary[1];
hammingCode[2]=Binary[0];
h1=hammingCode[10]+hammingCode[9]+hammingCode[6]+hammingCode[5]+hammingCode[2];
if(h1%2==0) 
hammingCode[1]=0;
else 
hammingCode[1]=1;

h0=hammingCode[10]+hammingCode[8]+hammingCode[6]+hammingCode[4]+hammingCode[2];;
if(h0%2==0) 
hammingCode[0]=0;
else 
hammingCode[0]=1;



for(i=11;i>=0;i--)    
{
 printf("%d ",hammingCode[i]);
}



    
return 0;
}