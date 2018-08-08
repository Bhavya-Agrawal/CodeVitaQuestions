#include<stdio.h>
int main()
{
	int n,arr[10],i,j=0,sum[10],sum1=0,max=0;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<10;i++)
		sum[i]=0;
	
		for(j=0;j<n-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				sum1+=arr[j]+arr[j+1];
			}
			else
			{
				sum[j++]=sum1;
				//as this current value of array is not taken so initialise the sum1 with this
				sum1=arr[j];
			}
		}
		

		for(i=0;i<10;i++)
		{
			if(sum[i]>=max)
				max=sum[i];
		}
		printf("%d\n",max);



	return 0;
}