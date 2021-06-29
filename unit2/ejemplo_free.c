#include <string.h>
#include <stdio.h>
#include <alloc.h> //or #include <malloc.h>
int main(void)
{
	char *str;
	/* allocate memory for string */
	str = (char *)malloc(10);
	/* copy "Hello" to string */
	strcpy(str, "Hello");
	/* display string */
	printf("String is %s\n", str);
	/* free memory */
	free(str);
	str=NULL;
	return 0;
}



