#include <stdio.h>

int main(int argc, char** argv)
{
	int i;

	printf("This is unit test of ProcEmu!\n");
	printf("argc     : %d\n", argc);
	for (i = 0; i < argc; ++i)
		printf("argv[%2d] : %s\n", i, argv[i]);

	return 0;
}

