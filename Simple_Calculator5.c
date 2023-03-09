

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	float a, b;
	while (1) 
  {
		printf("Enter an operator (+, -, *, /) : ");
		scanf(" %c", &ch);

		if (ch == 'x')
			exit(0);
      
		printf("Enter two first and second operand: ");
		scanf("%f %f", &a, &b);
		
  
		if (ch == '+')
    {
			printf("f + f = f\n", a, b, a + b);
		}
    

		else if (ch == '-') 
    {			
			printf("f - f = f\n", a, b, a - b);
		}
    
    
		else if (ch == '*') 
    {
			printf("f * f = f\n", a, b, a * b);
		}
    

		else if (ch == '/') 
    {
			printf("f / f = f\n", a, b, a / b);
		}
    
		else 
    {
			
			printf("Error! Please write a valid operator\n");
		}
	}
}
