#include <stdio.h>
#include "laba.h"

int stok (char str[], char ch, char *ptr[])
{
	char *suf = str;
	ptr[0] = str;
	int i, j = 1;
	while ((i = schr(suf, ch)) >= 0)
	{
		suf[i] = '\0';
		suf = suf + i + 1;
		ptr[j] = suf;
		j++
	}
	return j;
}