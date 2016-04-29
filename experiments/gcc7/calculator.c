#include"stdio.h"
#include "include/calculator.h"
#define define 100
void matrixmulti(int a[LENGTH][LENGTH],int b[LENGTH][LENGTH],int c[LENGTH][LENGTH])
{
int i,j,k;
for(i=0;i<LENGTH;i++) 
    { 
        for(j=0;j<LENGTH;j++) 
        { 
		int sum=0;             
            for (k=0;k<LENGTH;k++) 
           { sum+=a[i][k]*b[k][j]; 
               c[i][j]=sum;}
        } 
    }
for(i=0;i<LENGTH;i++)
    { 
        for(j=0;j<LENGTH-1;j++) 
        printf("%d ",c[i][j]); 
        printf("%d\n",c[i][LENGTH-1]); 
 } 
}
