#include <stdio.h>
#include <assert.h>

int main(int argc, char** argv) 
{
	assert(argc==2 && "Only one argument allowed!");
	printf("Hello, %s!\n", argv[1]);
}

