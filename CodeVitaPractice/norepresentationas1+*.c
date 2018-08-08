#include<stdio.h>
int main()
{
	int no,count_no=0,sum,count_1,count_11,mul,div,total=0;
	scanf("%d",&no);
	//displaying no in terms of 1
	if(no==0)
		total=0;

	else if(no<=10)
		{
			count_1=no;
			sum=count_1-1;
			total = count_1+sum;
		}

	else if(no>10&&no%11==0&&no<121)	
	{	
		div=no/11;
		count_11=2*div;
		sum=div-1;
		total = count_11+sum;
	}
	else if(no>10&&no%11!=0)
	{
		div = no/11;
		//no of 1 in each is 2 because of (11) 
		count_11 = 2*div;
		mul=div-1;
		count_1=no%11;
		sum=count_1-1;	
										//1 is for adding the sum of (summissions) and (multiplications)
		total=count_11+count_1+sum+mul+1;
		printf("%d\n%d\n%d\n%d\n",count_11  ,count_1  ,sum  ,mul);
	}

	else
	{
	 if(no>=121&&no%11==0)
	{
		while(no>1)
		{
			no = no/11;
			count_11+=1;
		}
		mul = count_11-1;
		total=count_11+mul;
	}
	}
	printf("%d\n",total);
	return 0;
}