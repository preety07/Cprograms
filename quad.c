//Quadratic equation
#include <stdio.h>
#include <math.h>
void main()
{
//Declaring of variables
	float a,b,c,d,r1,r2,rpart,ipart;
	printf("Enter the coefficients \n:");
	scanf("%f%f%f",&a,&b,&c);
	if(a!=0)
	{
		d=(b*b)-(4*a*c);
		if(d==0)
		{
			r1=(-b)/(2*a);
			r2=r1;
			printf("The roots are equal r1=%f and r2=%f",r1,r2);
		}
		else if(d>0)
		{
		
			r1=(-b+(sqrt(d)))/(2*a);
			r2=(-b-(sqrt(d)))/(2*a);
			printf("The roots are distinct r1=%f and r2=%f",r1,r2);
		}
		else
		{
			rpart=-b/2*a;
			ipart=sqrt(d)/2*a;
			printf("The roots are imaginary:rpart=%f + ipart=%f\n",rpart,ipart);
			printf("The roots are imaginary:rpart=%f - ipart=%f\n",rpart,ipart);	
		}
		}
	else
	{
		printf("Not a quadratic equation");
	}
}
	
				
			
				
	
		
                                                                                                                                                                                                                                                                                                                            
