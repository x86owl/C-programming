#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char * name;
	int age;

}person;

void birthday(person *p);
void birthday(person * p){
 		p->age++;
}

int main(void){
	person x86owl;

	x86owl.name = "Owlyalp";
	x86owl.age = 22;

	fprintf(stdout,"%s is %d years old.\n", x86owl.name, x86owl.age);
	birthday(&x86owl);	
	fprintf(stdout,"Happy birthday! %s now you are %d years old.\n", x86owl.name, x86owl.age);

 	return 	EXIT_SUCCESS;
}