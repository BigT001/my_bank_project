#include "main.h"

/**
 */

char login()
{
	char username[20];
	char password[20];
	/*int i;*/

	printf("login\n\n");

	printf("Enter username: ");
	fgets(username, sizeof(username), stdin);

	printf("Enter password: ");
	fgets(password, sizeof(password), stdin);
}
