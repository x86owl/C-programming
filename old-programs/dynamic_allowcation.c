#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	char * name;
	int age;
}person;

int main(){
	person *myperson =(person *) malloc(sizeof(person));

	myperson->name = "x86owl";
	myperson->age = 22;

	printf("Name: %s\nAge: %i\n",myperson->name, myperson->age);

	free(myperson);
	return EXIT_SUCCESS;
}
