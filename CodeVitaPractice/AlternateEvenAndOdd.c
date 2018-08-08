#include<stdio.h>
#include<math.h>
int prime(int no)
{
	int i;
	if(no==0||no==1)
	{
		return 0;
	}
	else
	{
	for(i=2;i<=no/2;i++)
	{
		if(no%i==0)
			return 0;		
	}
	return 1;
	}
	
	
}
int main()
{
	int n,temp,rem,count=0,yes=0,even=0;
	scanf("%d",&n);
	temp = n;

	while(temp!=0)
	{
		rem = temp%10;
		temp=temp/10;
		if(rem==0||rem==1)
			{printf("invalid input\n");return 0;}
		else
		count++;

	}

	//printf("%d\n",count);
	//to check that the no of digits in the no is odd or even
	count%2==0?even=1:0;
	//printf("%d\n",even);

	temp = n;
	if(even==1)
	{
		//printf("even digits\n");
		while(temp>0)
		{
			//printf("%d%d\n",temp%10,(temp%100)/10);
			if(!prime((temp%10))&&(prime((temp%100)/10)))
			{
				//printf("prime\n");
				yes = 0;
			}
			else
				yes=1;	

			temp=temp/100;
		}
	}

	else if(even==0)
	{
		//printf("odd digits\n");
		while(temp>0)
		{
			if(!prime((temp%100)/10)&&(prime(temp%10)))
			{
				//printf("prime");
				yes = 0;
			}
			else
				yes=1;	

			temp=temp/100;
		}
	}
	yes==0?printf("Yes"):printf("No");

	return 0;
}