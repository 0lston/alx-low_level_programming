#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SUM 2772

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */

int main(void)
{
	int sum = 0,
	    i = 0;
	char password[87];

	srand(time(NULL));

	for (i = 0; sum < SUM - 126; i++)
	{
		password[i] = 32 + rand() % 95;
		sum += password[i];
	}
	password[i++] = SUM - sum;
	password[i] = '\0';
	printf("%s", password);

	return(0);
}
