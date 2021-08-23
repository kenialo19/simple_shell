#include "shell.h"

/**
 * child_exec - create fork.
 * @arg: argument
 * Return: 1.
 */
int child_exec(char **arg)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == -1)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
		(execve(_path_dir(arg[0]), arg, NULL));
	}	 
	if (pid < 0)
	{
		/*Error forking*/
		perror("hsh");
	}
	else
	{
		pid = wait(&status);
		if (WIFEXITED(status)) 
		{
            printf("The process ended with exit(%d).\n", WEXITSTATUS(status));
        }
        if (WIFSIGNALED(status)) 
		{
            printf("The process ended with kill -%d.\n", WTERMSIG(status));
        }
	}
	return (0);
}
