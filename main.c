#include <stdio.h>
#include <stdlib.h>

char *a(int b)
{
	b = b & 0x7FFFFFFF;
	const unsigned long long c = 0x656F766465646E00u;
	char *d = malloc(5 - b % 2);
	for (unsigned int a = b % 2; a < 7; a += 2)
	{
		*(d + a / 2) = (char)(((c << (8 * a)) & (0xFFllu << 56)) >> 56);
	}
	*(d + 4 - b % 2) = 0x00;
	return d;
}

int main()
{
	int e;
	while (1)
	{
		if (scanf("%d", &e) - 1)
		{
			return 1;
		}

		char *f = a(e);
		printf("%s\n", f);
		free(f);
	}
	return 0;
}