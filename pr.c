#include<stdio.h>
int main()
{
float p,r,t,si;
printf("Enter principle = ");
scanf("%f",&p);
printf("\nEnter rate of interest = ");
scanf("%f",&r);
printf("\nEnter time = "); 
scanf("%f",&t); 
si=(p*r*t)/100;
printf("\nSimple Interest = %f",si);
}
