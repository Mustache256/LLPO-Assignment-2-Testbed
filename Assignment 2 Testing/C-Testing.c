
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void forkExample()
{
	if (fork() == 0)
		printf("Child fork\n");
	else
		printf("Parent fork\n");
}

int main()
{
	//forkExample();

	//This wont work in C++
	char *args[]={"./EXEC",NULL};
	execvp(args[0],args);

	printf("Ending-------\n");
	printf("I am EXEC.c called by execvp()");
	printf("\n");
	return 0;
}