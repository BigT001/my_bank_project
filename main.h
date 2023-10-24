#ifndef _BANK_H_
#define _BANK_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main();
void welcome();
void login();
void signup();

struct login
{
	char fname[20];
	char lname[20];
	char username[20];
	char password[20];
}

#endif
