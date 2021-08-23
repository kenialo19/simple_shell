#include "shell.h"

/**
 * child_exec - create fork.
 * @arg: argument
 * Return: 1.
 */
int child_exec(char **arg)
{
	pid_t pid;
	int status, numbererr = 0;

	pid = fork();

	if (pid == -1)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
		/*printf("arg-->%s\n", arg[0]);*/
		execve(_path_dir(arg[0]), arg, NULL);
		numbererr = errno;
		/*printf("numero numbererr:[%d]\n", numbererr);
		printf("numero j:[%d]\n", j);*/
		_error(numbererr);
		exit(0);
		/*printf("numero j:[%d]\n", j);*/
	}

	/*if (pid < 0)*/
	pid = wait(&status);
	
	return (0);
}
