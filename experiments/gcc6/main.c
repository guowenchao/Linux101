#include<stdio.h>
int main()
{
	void Insertsort(int a[],int n);
	int a[100],n,i;
	printf("Input the number of elements in the arrey:");
	scanf("%d",&n);
	printf("Input arrey:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	Insertsort(a,n);
	return 0;
}
