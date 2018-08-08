#include<stdio.h>
int main()
{
	int n,i,j,arr[10],sum=0,s,count=0;
	scanf("%d",&n);
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==s)
			{
				//printing the two consecutive nos giving the appropriate answer 
				printf("%d\n",arr[i]);
				printf("%d\n",arr[j]);
				count = 1;
				break;
			}
		}
		if(count==1)
			break;
	}
	return 0;
}
