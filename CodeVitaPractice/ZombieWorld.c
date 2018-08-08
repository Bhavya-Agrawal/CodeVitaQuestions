#include<stdio.h>

int main()
{
	int i,test,no_zomb,max_time,energy[10],initial_en_player,min_energy;
	scanf("%d%d%d%d%d",&test,&no_zomb,&max_time,&initial_en_player,&min_energy);
	for(i=0;i<no_zomb;i++)
	{
		scanf("%d",&energy[i]);
	}

	//as if my max time is less than zombies then I cant win the game
	if(max_time<no_zomb)
	{
		//exit the program
		//exit(0);
	}

	else
	{
	for(i=0;i<no_zomb;i++)
	{
		if(initial_en_player>=energy[i])
		{
			initial_en_player+=initial_en_player - energy[i];
			max_time--;
			printf("%d\n",max_time);
		}
	}
	//if my time is not exceeded the given value
	//if(max_time>=no_zomb)
	if(max_time!=0)
		printf("Yes");
	else
		printf("No");

	}
	
	return 0;
}
