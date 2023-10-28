#include "main.h"

/**
 */

void welcome()
{
	int option;
	size_t bufsize = 0;
	char *userInput = NULL;

	printf("Welcome to PaycaRD\n\n");

	printf("Please enter 1 to get started or 2 to login\n");
	printf("\tGet started: 1\n");
	printf("\tI already have an account: 2\n\n");

	/*Using getline to read the user's choice*/
	getline(&userInput, &bufsize, stdin);
	option = atoi(userInput); /*converts the input to an integer*/

	free(userInput);

	if (option == 1)
		{
		signup();
		}

	else if (option == 2)
		{
		login();
		}
	
	else
		{
		printf("Invalid option\n");
		}
}
