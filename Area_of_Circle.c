#include<stdio.h>
int main()
{
	float radius,area;
  
	printf("Enter the Radius of a Circle :");
	scanf("%f", &radius);
  
	area=3.14*radius*radius;
	printf("The Area of a Circle is : %f",area);
	return 0;
}
