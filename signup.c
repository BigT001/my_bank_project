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

	printf("Enter first Name: \n");
	fgets(firstname, sizeof(firstname), stdin);

	printf("Enter last Name: \n");
	fgets(lastname, sizeof(lastname), stdin);

	printf("Enter user ID: \n");
	fgets(userID, sizeof(userID), stdin);

	printf("Enter password: \n");
	fgets(password, sizeof(password), stdin);

	printf("Enter password again \n");
	fgets(confirmpass, sizeof(confirmpass), stdin);
	
	
	printf("first Name: %s", firstname);
	printf("last Name: %s", lastname);
	printf("Username: %s", userID);

	if (strcmp(password, confirmpass) == 0)
	{
		printf("check your email for confirmation code");

		fprintf(file, "First Name: %s", firstname);
		fprintf(file, "Last Name: %s", lastname);
		fprintf(file, "UserID: %s", userID);
		fprintf(file, "Password: %s", password);

		fclose(file);

	} else {
		printf("Passwords don't match");
	}

return (0);
}
	
