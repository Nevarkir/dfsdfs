#include <stdio.h>
#include "laba.h"

int schr (char str[], char ch)
{
	int i;
	for (i = 0; (str[i]!=ch) && (str[i]!='\0'); i++);
	return i;
}