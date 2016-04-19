#include <stdio.h>
#include "laba.h"

int slen (char str[])
{
	int i=0;
	for (i=0; str[i]!='\0'; i++);
	return i-1;
}