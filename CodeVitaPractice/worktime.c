#include<stdio.h>

int main()
{
	int t,m,i,j,k,arr[10][3],sum=0,no=0,count=0;
	scanf("%d",&t);
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	for(i=0;i<m;i++)
	{
		if(arr[i][2]==arr[i][0]-1)
			no = arr[i][0];
			//no = arr[i][0]-arr[i][2];
			//no = arr[i][2];
		else
			break;
		for(k=0;k<m;k++)
		{
			for(j=0;j<3;j++)
			{
				if(arr[k][j]==no)
				{
					sum+=arr[k][j+1];
				}	
				else
				{
					count=1;
				}
				//printf("%d\n",sum);
				break;
				//arr[i][j]==no?sum+=arr[i][j+1]:0;
				//break;
			}
			if(count==0)
			{break;}
			else
				{count=0;}
		}
	}

	printf("%d\n",sum);
	return 0;
}