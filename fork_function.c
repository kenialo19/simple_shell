#include "shell.h"

/**
 * child_exec - create fork.
 * @arg: argument
 * Return: 1.
 */
int child_exec(char **arg, char *msg, int count)
{
	pid_t pid;
	int status, numbererr = 0;
	char *lib_path;

	pid = fork();

	if (pid == -1)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
		lib_path = _path_dir(arg[0]);
		execve(lib_path, arg, NULL);
		numbererr = errno;
		_error(numbererr, msg, count);
		free(lib_path);
		exit(0);
	}

	pid = wait(&status);

	return (0);
}
