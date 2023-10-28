#include "main.h"

/**
 *
 */

FILE *file;

char signup()
{

	char firstname[30];
	char lastname[30];
	char userID[30];
	char password[30];
	char confirmpass[30];

	file = fopen("users.txt", "a");

	if (file == NULL)
	{
		printf("Not in data base.\n");
		return 1;
	}
	
	printf("\tSIGNUP\t\n");

	printf("Enter first Name: ");
	fgets(firstname, sizeof(firstname), stdin);

	printf("Enter last Name: ");
	fgets(lastname, sizeof(lastname), stdin);

	printf("Enter user ID: ");
	fgets(userID, sizeof(userID), stdin);

	printf("Enter password: ");
	fgets(password, sizeof(password), stdin);

	printf("Enter password again ");
	fgets(confirmpass, sizeof(confirmpass), stdin);
	
	
	printf("first Name: %s", firstname);
	printf("last Name: %s", lastname);
	printf("Username: %s", userID);
	printf("password: %s", password);
	printf("confirm pass: %s", confirmpass);

	if (strcmp(password, confirmpass) == 0)
	{
		printf("check your email for confirmation code\n\n");
	}

return (0);
}
	
