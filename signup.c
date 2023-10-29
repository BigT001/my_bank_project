#include "main.h"

/**
 *
 */


char signup(struct user *user)
{
	printf("\tSIGNUP\t\n\n");

	size_t bufsize = MAX_LENGTH;
	ssize_t user_read;

	printf("first Name:\t\t last name:\n\n");
	user_read = getline(&user->firstname, &bufsize, stdin);


	printf("What is your date of birth?\n");
	printf("Day: ");
	scanf("%d", &user->birthD);
	printf("Month: ");
	scanf("%d", &user->birthM);
	printf("Year: ");
	scanf("%d", &user-> birthY);

	while ((getchar()) != '\n') /* consume the new line character */

	printf("Gender?\n");
	printf("1. Male\n");
	printf("2. Female\n");
	user_read = getline(&user->gender, &bufsize, stdin);

	printf("Mobile: \n\n");

	printf("Password: ");


	/* name condition */


return (0);
}
	
