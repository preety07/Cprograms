//Program to compute taylor series
#include <stdio.h>
#include <math.h>
#define PI 3.142857
int main()
{
	float degree,x,nume,deno,sum,term;
	int i;
	printf("Enter the degree:");
	scanf("%f",&degree);
	//Convert degrees to radian
	x=degree*(PI/180.0);
	nume=x;
	deno=1;
	i=1;
	sum=0;
