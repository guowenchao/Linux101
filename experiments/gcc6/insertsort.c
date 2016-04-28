#include<stdio.h>
void Insertsort(int a[],int n)  
{  
    int i,j;
    for(i=1;i<n;i++)  
    {
		if(a[i]<a[i-1])  
        { 
            int temp=a[i];  
            for(j=i-1;j>=0&&a[j]>temp;j--)  
            {
				a[j+1]=a[j];
			}
            a[j+1]=temp;  
        }
    }
    printf("Output sort:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
printf("\n");
}
