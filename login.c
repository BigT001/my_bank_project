#include "main.h"


/**
 */


int isUserInFile(char *userID, char *password)
{
	struct user tempUser;
	file = fopen("users.txt", "r");
	if (file == NULL) {
		printf("Error: file not in data base.\n");
		return 0;
	}
	
	while (fread(&tempUser, sizeof(struct user), 1, file)) {
		if (strcmp(tempUser.userID, userID) == 0 && strcmp(tempUser.password, password) == 0)
			fclose(file);
		return 1;
	}

	fclose(file);
	return 0;
}

int login()
{
	printf("\tLOGIN\t\n");
	char userID[30];
	char password[30];

	printf("Enter user ID: ");
	fgets(userID, sizeof(userID), stdin);

	printf("Enter password: ");
	fgets(password, sizeof(password), stdin);

	userID[strcspn(userID, "\n")] = '\0';
	password[strcspn(password, "\n")] = '\0';

	if (isUserInFile(userID, password))
	{
		printf("Login successful!\n");
		return 1;
	} else {
		printf("Login faild. Invalid user ID or Password!\n");
		return 0;
	}
}

int confirm()
{
	int isLoggedIn = 0;
	while (!isLoggedIn) {
		isLoggedIn = login();
	}

return 0;
}

