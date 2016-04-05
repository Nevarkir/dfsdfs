#include <stdio.h>
#include "laba.h"

int schr (char str[], char ch)
{
	int i, c = -1;
	for (i = 0; str[i]!='\0'; i++)
	{
		if (str[i] == ch) c = i;
	}	
	return c;
}