#include "main.h"

/**
 *
 */


char signup(struct user *user)
{
	printf("\tSIGNUP\t\n\n");

	size_t bufsize = MAX_LENGTH;
	ssize_t user_read;

	printf("What is your name?\n");
	printf("first Name:\t\t last name:\n\n");
	user_read = getline(&user->firstname, &bufsize, stdin);


	printf("What is your date of birth?\n");
	printf("D/M/Y\n\n"); /** This should be a drop down menu */

	printf("What is your gender?\n");
	printf("Male:\t\t Female:\n\n");

	printf("What is your mobile number?\n");
	printf("Mobile: \n\n");

	printf("Create a password\n");
	printf("Password: ");


	/* name condition */


return (0);
}
	
