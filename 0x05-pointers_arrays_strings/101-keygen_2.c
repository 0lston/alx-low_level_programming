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
	    i = 0,
	    rand_c;
	char password[87];

	srand(time(NULL));

	while (sum < SUM)
	{
		rand_c = 32 + rand() % 95;
		if (sum + rand_c < SUM - 32 || sum + rand_c == SUM)
		{	
			password[i] = rand_c;
			sum += rand_c;
			i++;
		}
	}
	password[i] = '\0';
	printf("%s", password);

	return(0);
}
