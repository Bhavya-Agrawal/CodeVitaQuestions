#include<stdio.h>
int main()
{	
	int arr[10],n,no1,no2,i,j,min=10000,sum=0;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	//min = arr[0]+arr[1];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{

		sum=arr[i]+arr[j];
		if(sum<0)
			sum=(-1)*sum;
		if(sum<min)
			{
			min=sum;
			//get the nos giving minimum sum
			no1 = arr[i];
			no2 = arr[j];
			}

		else
			{}

		}
	}b

	printf("%d\n%d %d\n",min,no1,no2);
	return 0;
}