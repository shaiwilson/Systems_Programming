#include <stdio.h>

// if statements

int main(int argc, char const *argv[])
{
	int i = 0;

	if (argc == 1) {
		printf("You only have on arguments.\n");
	} else if(argc > 1 && argc < 4){
		printf("Here's your arguments\n");

		for (i = 0; i < argc; i++) {
			printf("%s ", argv[i]);
		}

		printf("\n");
	} else {
		printf("You have too many arguments\n");
	}
	
	return 0;
}