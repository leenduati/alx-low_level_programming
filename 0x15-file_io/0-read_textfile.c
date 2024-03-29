#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 *read_textfile-function that reads and prints to STDOUT
 *@filename: this is the name of the file
 *@letters:number of letters it should read and print
 *Return:number of letters it could read and print
**/



ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t k, l;
	char *c;


	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	c = malloc(letters * sizeof(char));

	if (c == NULL)
		return (0);

	k = read(fd, c, letters);

	l = write(STDOUT_FILENO, c, k);

	close(fd);
	free(c);
	return (l);
}
