#include<stdio.h>
int main()
{
	int n,i,j=0,arr[10],max[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);		
	}

	for(i=0;i<n;i++)
	{
		if(arr[i]<=arr[i+1])
		{
			max[j++]=arr[i];
		}
		else
		{
			max[j++]=arr[i];
		}

	}

	return 0;
}