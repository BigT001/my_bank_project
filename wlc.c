#include "main.h"

/**
 */

void welcome()
{
	printf("Welcome to city bank\n");

	printf("SIGNUP\n");
	printf("LOGIN\n");
	printf("Exit");
}

int main()
{
	int validate;
	char input[10];

	do {
		welcome();
		printf("Enter option: ");
		fgets(input, sizeof(input), stdin);
		sscanf(input, "%d", &validate);

		if (validate < 1 || validate > 3)
			printf("Invalid. try agian.\n");
			continue;
		}

		switch (validate) {
			case 1:
				signup();
				break;
			case 2:
				if (login()) {
					printf("login successful");
					/**logic will be added here.*/
				}
				break;
			case 3:
				printf("Goodbye!\n");
				exit(0);
			default:
				printf("Invalid choice.try again\n");
				break;
		}
return 0;
}
