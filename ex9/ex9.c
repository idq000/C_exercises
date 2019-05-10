#include <stdio.h>

int main (int argc, char *argv[])
{
	int i = 25;
	
	while (i >= 0){
		printf("%d", i);
		i--;
	}
	
	// need this to add a final newline
	printf("\n");
	
	i = 1;
	
	while (i <= 10){
		
		if (i == 1){
			printf("William has a dolla supa rich n fly\n");
		} else {
			printf("William has $%d million dollars in the bank.\n",i);
		}
		i++;
		
	}
	
	return 0;
}