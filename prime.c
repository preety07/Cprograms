#include<stdio.h>
int main()
{
	int n;int c=0;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n<=1)
		printf("Neither a prime nor a composite number");
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==2)
	{
		printf("The number is prime");
	}
	else
	{
		printf("The number is not prime");
	}
	return 0;
}
			
	
			
			
		
