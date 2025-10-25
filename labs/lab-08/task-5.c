#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "Hello";
	char dest[20];
	strcpy(dest, src);
	printf("Actual String: %s\n", src);
	printf("Copied string: %s\n", dest);
	return 0;
}