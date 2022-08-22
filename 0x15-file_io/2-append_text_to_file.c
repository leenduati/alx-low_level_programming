#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

/**
 *append_text_to_file-function that APPENDS TEXT AT THE END OF THE FILE
 *@filename: nameoffile
 *@text_context: the text to fill in created doc
 *Return: return 1, if successful
**/



int append_text_to_file(const char *filename, char *text_context)
{
	int k;
	int fd;


	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 00600);

	if (fd == -1)
		return (-1);

	k = write(fd, text_context, strlen(text_context));

	if (k == -1)
		return (-1);

	close(fd);
	return (1);
}
