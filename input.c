#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "laba.h"
#define MAXLINE 1000
#define MAXPATH 260

void input (char path[])
{
	fgets(path, MAXLINE, stdin);
}
