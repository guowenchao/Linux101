#include <stdio.h>
#include <time.h>
#include "include/calculator.h"
#define LENGTH 10
int main() {
	
	int a[LENGTH][LENGTH],b[LENGTH][LENGTH],c[LENGTH][LENGTH];
	double time_start, time_end;
		
	
	int i,j,k; 
	for (i=0;i<LENGTH;i++)
	{	for (j=0;j<LENGTH;j++)
		a[i][j]=1;
	}
	for (i=0;i<LENGTH;i++)
	{	for (j=0;j<LENGTH;j++) 
    		b[i][j]=1;} 
	time_start = clock();
	matrixmulti(a,b,c);
	time_end = clock();
	printf("Time used: %10.9f\n", (double) ( (time_end - time_start) / 1000.0) );
	return 0;
}



