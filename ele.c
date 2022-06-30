//Program to calculate electricity bill
#include <stdio.h>
#include<string.h>
int main()
{
//Variable declaration
	//string name;
	char name[20];
	int unit,charge,total;
	printf("Enter the name of the customer and the number of units consumed:\n");
	scanf("%s",name);
	scanf("%d",&unit);
	
	if(unit>=0 && unit<=200) 
	{
		charge=unit*0.8;
	}
	else if(unit>=200 && unit<=300)
	{
		charge=200*0.8+(unit-200)*0.9;
	}
	else if(unit>300)
	{
		charge=200*0.8+100*0.9+(unit-300)*1;
	}
	else
	{
		printf("Invalid unit");
		return 1;
	}				
	total=charge+100;
	if(total>400)
	{
		total=total+(total*0.15);
		
	}
	printf("The name of the customer is %s\n",name);
	printf("The total charge is %d\n",total);
	return 0;
}
	
