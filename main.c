#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int hello(const char *nom)
{
	printf("Hello %s", nom);
	return 0;
}

int main(void)
{
	printf("Test de la fonction hello()");

	hello("Phil");
	hello("Bruno");
	hello(NULL);

	return 0;
}

