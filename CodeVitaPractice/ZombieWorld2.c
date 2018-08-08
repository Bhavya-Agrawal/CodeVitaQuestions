#include<stdio.h>
int main()
{
	int i,min=10000,loc,bob_energy,no_of_zombies,energy[10];
	scanf("%d",&bob_energy);
	scanf("%d",&no_of_zombies);
	for(i=0;i<no_of_zombies;i++)
	{
		scanf("%d",&energy[i]);
		if(energy[i]<0)
			printf("Invalid input");
	}

	//getting the minimum energy zombie first

	for(i=0;i<no_of_zombies;i++)
	{
	
	if(energy[i]<0)
	{
		return 0;
	}
	else
	{
	bob_energy-=(energy[i]%2)+(energy[i]/2);
	//printf("%d\n", bob_energy);
	}

	}
	//to check that at the last the players energy is not lost as a whole
	bob_energy>0?printf("Yes"):printf("No");
	
	
	return 0;
}