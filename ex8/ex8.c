#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	argc--;
	if (argc == 0) {
		printf("No arguments entered.  Good job!\n");
	} else if (argc == 1) {
		printf("You only have one argument.  You suck.\n");
	} else if (argc > 1 && argc < 4) {
		printf("Here's your arguments:\n");
		
		for (i = 0; i <= argc; i++){
			printf(" %s",argv[i]);
		}
		printf("\n");
	} else if (argc >= 4 && argc <= 6) {
		printf("Whatever.\n");
	}
	
	else {
		printf("You have too many arguments.  You suck.\n");
		
	}
	
	return 0;

}