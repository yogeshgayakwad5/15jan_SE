#include<stdio.h>
int main()
{
  float b,h,area;
  printf("Enetr the Base of Triangle :");
  scanf("%f",&b);
  printf("Enetr the Height of Triangle :");
  scanf("%f",&h);
  
  area = (b*h) / 2 ; 
  printf("\n\n Area of Triangle is: %f",area); 
  
  return 0;
}
