#ifndef _BANK_H_
#define _BANK_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

#define MAX_LENGTH 50

struct user_info {
	char firstname[MAX_LENGTH];
	char lastname[MAX_LENGTH];
	int birthD, birthM, birthY;
	char gender[MAX_LENGTH];
	int mobile[MAX_LENGTH];
	char lastname[MAX_LENGTH];
	char userID[MAX_LENGTH];
	char password[MAX_LENGTH];
	char confirmpass[MAX_LENGTH];
};


struct User_login {
	char userID;
	char password;
};


extern FILE *file;

int Mobilevalidate(const char *mobile)
	/*check if the mobile number is of digits and of max num of 11*/
	int len = strlen(mobile);
	for (int i = 0; i < len; i++)
{
	if (!isdigit(mobile[1]) || len > 11) {
		return 0; /*invalid mobile number*/
	}
};


int main();
void welcome();
char signup();
int login();
int inFile(char *UserID, char *password);

#endif
