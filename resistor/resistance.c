2#include <stdio.h>
double resistance_in_parallel();
double resistance_in_series();
int main (int argc, char const *argv[])
{
	int decide;
	double total;
	char unit[] ="Ohm";
	while(decide!=3){
	printf("solution choice:\nchoice 1\nchoice 2\nchoice 3\n");
	scanf("%d",&decide);
		switch (decide)
		{
			case 1:total+=resistance_in_series();
			      printf("The equivalent resistance is :%6.2lf %s\n",total,unit);
			break;
			case 2:total+=resistance_in_parallel();
			      printf("The equivalent resistance is :%6.2lf %s\n",total,unit);
			break;
			
		}
	}
	
} 

double resistance_in_series()
{
	int x=0;
	double sum;
	int i=0;
	double date;
	double series_resistance;
	printf("Please enter the number of total resistors in serie\n");
	scanf("%d",&x);
	double resistance_number[x];
	for(i=0;i<x;i++){
		printf("enter the value of each resistor:\n");
		scanf("%lf",&date);
		resistance_number[i]=date;
		sum+=resistance_number[i];
//		printf("%lf",resistance_number[i]);
//		printf("%lf",sum);
	}
	return sum;
} 
double resistance_in_parallel()
{
	int x=0;
	double sum;
	int i=0;
	double date;
	double parallel_resistance;
	printf("Please enter the number of total resistors in para\n");
	scanf("%d",&x);
	double resistance_number[x];
	for(i=0;i<x;i++){
		printf("enter the value of each resistor:\n");
		scanf("%lf",&date);
		resistance_number[i]=date;
		sum+=1/resistance_number[i];
	}
	return 1/sum;
}
 
