#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void history() 
{
	char ex[12];
  
  	puts("Enter your ex name");
  	fscanf(stdin,"%11s", ex);

  	fprintf(stdout,"Dear %s.\n\n\tYou are my history!\n", ex);
}

int main(int argc, char *argv[])
{	
	int x = 45;

	//x = sqrt(x);
	//x = pow(x,2);
	//x = round(x);
	//x = ceil(x);
	//x = floor(x);
	//x = abs(x);
	//x = log(x);
	//x = sin(x);
	//x = cos(x);
	x = tan(x);

	fprintf(stdout,"%d\n",x);

	return EXIT_SUCCESS;
}
