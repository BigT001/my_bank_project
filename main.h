#ifndef _BANK_H_
#define _BANK_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

struct user {
	char firstname[30];
	char lastname[30];
	char userID[30];
	char password[30];
	char confirmpass[30];
};

extern FILE *file;

int main();
void welcome();
char signup();

#endif
