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
	input (path);
	printf ("%s", path);
	char ch = 'h';
	printf ("%d", schr (path, ch));
	return 0;
}
