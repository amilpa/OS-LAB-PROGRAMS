
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	int pid= fork();

	if(pid==0)
	{
		printf("This is child process\n");
		exit(0);
	}

	else
	{
		pid = getpid();
		printf("Parent process id:%d\n" , pid);
	}
	
	return 0;
}


