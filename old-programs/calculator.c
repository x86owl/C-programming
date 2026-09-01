#include <stdio.h>

int main()
{	
	char operator; // integer data type that store single character such as ASCII  
	double num1,num2, result;

	printf("Enter an operator (+ , -, *, /):\n ");
	scanf(" %c", &operator);

	printf("Enter two numbers:\n ");
	scanf("%lf %lf", &num1, &num2);

	switch (operator){
		case '+':
			result = num1 + num2;
			printf("Result: %.21f\n",result);
			break;
		case '-':
			result = num1 - num2;
			printf("Result: %.21f\n",result);
			break;	
		case '*':
			result = num1 * num2;
			printf("Result: %.21f\n",result);
			break;
		case '/':
			if(num2 != 0){
				result = num1 /num2;
				printf("Result: %.21f\n",result);

			} else{
				printf("Error: Division by zero is not allowed.\n");
			}
			break;
		default:
		printf("Error: Invalid operator.\n");	

	}



	return 0;

}