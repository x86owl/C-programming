#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char **argv){
	int num = 0;
	puts("Enter the number of prices: ");
	fscanf(stdin,"%d", &num);

	float *prices = malloc(num * sizeof(float));

	if (prices == NULL){
		puts("The memory allocation failed.");
		return 1;
	}

	for (int i = 0; i < num; i++){
		printf("Enter the price#%d: \n", i+1);
		scanf("%f",&prices[i]);

	}

	int newnum = 0;
	printf("Enter the new number of prices: \n");
	scanf("%d", &newnum);

	float *temp = realloc(prices, newnum * sizeof(float));
	
	if(temp == NULL){
		printf("Couldn't reallocate Memorey\n");
		return 1;
	}
	else{
		prices = temp;
		temp = NULL;

		for(int i = num; i < newnum; i++){
			printf("Enter the price:%d\n", i + 1);
			scanf("%f", &prices[i]);
		}
		for(int i = 0; i < newnum; i++){
			printf("%.2f ", prices[i]);
		}

	}
	free(prices);
	prices = NULL;

	return EXIT_SUCCESS;
}
