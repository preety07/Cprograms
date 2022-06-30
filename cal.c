//Program to stimulate a simple calculator
#include <stdio.h>
int main()
{
	//Variable declaration
	int num1,num2,res;
	char op;
	//Display the message
	printf("Enter an arithmetic operator :");
	//Read the input
	scanf("%c",&op);
	//Display the message
	printf("Enter two numbers :");
	//Read the input
	scanf("%d%d",&num1,&num2);
	if(op=='+')
	{
		res = num1+num2;
	}
    else if(op=='-')
	{
		res = num1-num2;
	}
	else if(op=='*')
	{
		res = num1*num2;
	}
	else if(op=='/')
	{
		if(num2 == 0)
		{
			printf("Divide by zero error\n");
			return 1;
		}
		else
		{ 
			res = num1/num2;
		}
	}
	else if (op=='%')
	{
		if(num2 == 0)
		{
			printf("Divide by zero error\n");
			return 2;
		}	
		else
		{	
			res = num1 % num2;
		}
	}
	else
	{
		printf("Invalid operator");
		return 3;
	}		
	printf("%d %c %d = %d \n",num1,op,num2,res);	
    return 0;
}
	
	
	
	
	
	
	


		
	
	
   
	
	
	
