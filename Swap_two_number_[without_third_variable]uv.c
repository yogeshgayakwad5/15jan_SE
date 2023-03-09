#include<stdio.h>  
int main()    
{    
  int a=10, b=20;      
  printf("Before Swap a=%d b=%d",a,b);      
  a=a+b;   
  b=a-b;
  a=a-b;
  printf("\nAfter Swap a=%d b=%d",a,b);    
  return 0;  
}  
