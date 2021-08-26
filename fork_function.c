#include "shell.h"

/**
 * child_exec - create fork.
 * @arg: argument
 * @msg: wrong command
 * @count: execution count
 *
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
		execve(lib_path, arg, environ);
		numbererr = errno;
		_error(numbererr, msg, count);
		free(lib_path);
		exit(EXIT_SUCCESS);
	}

	pid = wait(&status);

	return (0);
}
