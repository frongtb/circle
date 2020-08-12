#include<stdio.h> 
int main()
{
	double r;
	printf("radius = ");
	scanf_s("%lf", &r);
	if (r < 0)
		printf("Error");
	else
		printf("area is %lf", (r * r * 22) / 7);
	return 0;
}