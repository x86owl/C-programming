#include <stdio.h>

typedef struct{

	char * model_name;
	int price;

}mobile;
int main(){

	mobile Redmi;

	Redmi.model_name = "Redmi Note 9 pro";
	Redmi.price = 20000;

	printf("%s price is  %d indian ruppies ",Redmi.model_name, Redmi.price);
	

	return 0;
}