#ifndef _BANK_H_
#define _BANK_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

#define MAX_LENGTH 50

struct user {
	char firstname[MAX_LENGTH];
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

int main();
void welcome();
char signup();
int login();
int inFile(char *UserID, char *password);

#endif
