#include<stdio.h>

void InsertSort(int *a, int n)
{
	int i, j, tmp;
	for(i=1; i<n; i++)
	{
		tmp = a[i];
		j = i-1;
		while(j>=0 && a[j] > tmp)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = tmp;
	}
}
int main()
{
	int i;
	int a[7] = {5,2,10,8,6,4,7};
	InsertSort(a, 7);
	for(i=0; i<7; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
