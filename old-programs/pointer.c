#include <stdio.h>

int main(){

	int a =  1;
	int * pointer_a = & a;


	a += 1;
	* pointer_a  += 1;

	printf("the value of a is %d \n",a);
	printf("The vlaue of pointer_value is %d \n",*pointer_a);
	printf("the value of pointer is %d \n",pointer_a);

	return 0;
}