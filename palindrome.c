#include<stdio.h>
int main()
{
	int n,r,rev=0,ori;
	printf("Enter the number:");
	scanf("%d",&n);
	ori=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(ori==rev)
		{
			printf("The number is palindromic");
		}
	else
		{
			printf("The number is not palindromic");
		}
	return 0;	
}		
		
	
	
			
	
		
