#include<stdio.h> 
main()
{
	double r;
	printf("radius = ");
	scanf("%lf", &r);
	if (r < 0)
		printf("Error");
	else
		printf("area is %lf", (r * r * 22) / 7);
	return 0;
}