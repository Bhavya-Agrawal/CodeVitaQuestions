#include<stdio.h>

int automorphic(int n)
{
	int m=0,count=0;
	m=n*n;
//checking the no of digits in no and dividing it by appropriate tens then
	if(n<=10)
		//m%10==n?printf("automorphic no"):printf("non - automorphic");
		m%10==n?count++:0;
	else if(n>=10&&n<=100)
		//m%100==n?printf("automorphic no"):printf("non - automorphic");
		m%100==n?count++:0;
	if(n>=100&&n<=1000)
		//m%1000==n?printf("automorphic no"):printf("non - automorphic");
		m%1000==n?count++:0;

	//printf("%d\n",count);	
	return count;
}
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		//adding up the values returned in count variable
		sum+=automorphic(i);
	}
	printf("%d\n",sum);
	return 0;
}