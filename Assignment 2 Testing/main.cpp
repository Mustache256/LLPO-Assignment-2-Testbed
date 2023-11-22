#include <iostream>
#include <stdio.h>
#include <sys/types.h>
//#include <unistd.h>

/*void forkExample()
{
	if (fork() == 0)
		printf("Child fork\n");
	else
		printf("Parent fork\n");
}*/

int main()
{
	//forkExample();

	char* args[] = { "./EXEC", NULL };

	_wexecvp(args[0], args);
	return 0;
}