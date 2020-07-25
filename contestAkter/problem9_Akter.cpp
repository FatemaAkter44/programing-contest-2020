#include<stdio.h>    
int main(){  
int matrixA[10][10],matrixB[10][10],N,i,j;
printf("Contastent: Fatema Akter\n");

printf("Enter a square matrix size N:");
scanf("%d",&N);
printf("Enter the square matrix integer elements:\n");
for(i=0;i<N;i++)
{
    printf("Enter row %d:",i+1);
    for(j=0;j<N;j++)
    {
       scanf("%d",&matrixA[i][j]); 
    }
}
printf("You entered the square matrix:\n");
for(i=0;i<N;i++)
{
    for(j=0;j<N;j++)
    {
       printf("%d ",matrixA[i][j]); 
    }
    printf("\n");
}


for(i=0;i<N;i++)
{
    for(j=0;j<N;j++)
    {
       matrixB[j][i]=matrixA[i][j]; 
    }
}


printf("Modified matrix::\n");
for(i=0;i<N;i++)
{
    for(j=0;j<N;j++)
    {
       printf("%d ",matrixB[i][j]); 
    }
    printf("\n");
}

return 0;  
}  
