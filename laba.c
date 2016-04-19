#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "laba.h"
#define MAXLINE 1000
#define MAXPATH 260

int main()
{
	int i;
	char path[MAXLINE];
	char *ptr;
	input (path);
	printf ("%s", path);
	char ch = '/';
	printf ("%d", stok (path, ch, *ptr));
	printf ("\n");
	printf ("%d", slen (path));
	printf ("\n");
	return 0;
}
