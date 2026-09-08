#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int array[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int sum = 0;

	for(int i = 0; i < 14; i++){
		sum += array[i];
	}
		fprintf(stdout,"sum of array is %d\n",sum);

	return 0;
}