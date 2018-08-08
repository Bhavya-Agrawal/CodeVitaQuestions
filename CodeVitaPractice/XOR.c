#include<stdio.h>
int main()
{
	int n,k,i,j,arr[10],xor1=0,final_xor=0;
	scanf("%d",&n);
	// above scanf reads till space then reads 2nd input thus we can give the complete input in a given line itself
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		//operator for xor is ^
		xor1 = xor1 ^ arr[i];
	}

	//final_xor = (~k&xor||~xor&k)
	// xoring of k and xor of all array elements given gives the final output or no to be inserted
	final_xor = xor1 ^ k;
	printf("%d\n",final_xor);
	return 0;
}