#include <stdio.h>

int main(int argc, char** argv)
{
	char* name = argv[0];

	printf("%s has run correctly", name);

	_getch();
}