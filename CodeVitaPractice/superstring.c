#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,freq[27],freq1[27],count=1;
	char str1[100];
	//char ch1[100],ch2[100];
	scanf("%d",&t);
	scanf("%s",str1);
	//gets(str1);
	//gets(str2);

	for(i=1;i<=26;i++)
	{
		freq[i]=i;
	}
	for(i=1;i<27;i++)
	{
		freq1[i]=0;
	}
	for(i=0;i<strlen(str1);i++)
	{
		freq1[str1[i]-'a'+1]++;
	}

	// for comparing the frequency of the string with the no of occurence of that character in string
	for(i=1;i<27;i++)
	{
		if(i!=freq1[i]&&freq1[i]!=0)
		{
			count=0;
			printf("not a super string");
			break;
		}
	}
	if(count==1)
		printf("super string");
	
	return 0;
}