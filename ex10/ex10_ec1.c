#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 2){
		printf("ERROR:  You need one argument.\n");
		//this is how you abort a program
		return 1;
	}
	
	int i = 0;
	char letter = ','; //initialize letter with a comma
	
	for (i = 0; argv[1][i] != '\0'; i++){
	
		/* ASCII upper case letters range from 65d to 90d
		   To convert to lower case letters, add 32d */
		   
		if (argv[1][i] >= 65 && argv[1][i] <= 90){
			argv[1][i] += 32;
		}
		
		letter = argv[1][i];
		
		
		/*switch(letter){
			case 'a':
				printf("%d: 'A'\n", i);
				break;
			
			case 'e':
				printf("%d: 'E'\n", i);
				break;				
		
			case 'i':
				printf("%d: 'I'\n", i);
				break;				

			case 'o':
				printf("%d: 'O'\n", i);
				break;		

			case 'u':
				printf("%d: 'U'\n", i);
				break;		

			case 'y':
				if (i > 2){
					//it's only sometimes Y
					printf("%d: 'Y'\n", i);
				}
				break;		

			default:
				printf("%d: %c is not a vowel\n", i, letter);
		}*/
		
		if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
			
			//print the upper case letter as in the switch example
			printf("%d: '%c'\n", i, letter-32);	
		
		} else if (letter == 'y' && i > 2){
			
			printf("%d: 'Y'\n", i);
			
		} else {
		
			printf("%d: %c is not a vowel\n", i, letter);
		}
	
	}
	
	return 0;
	
}