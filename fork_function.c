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
	if (execve(arg[0], arg, NULL) == -1)
	{
		perror("child");
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		/*Error forking*/
		perror("lsh");
	}
	else
	{

		do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}

	return (1);
}
