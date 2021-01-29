#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFSIZE 1024

int main ()
{
	char buffer [BUFSIZE];
	int length, fd;
	fd = open ("data", O_RDONLY);
	if (fd == -1) 
	{
		perror ("Unable to open data");
		exit(EXIT_FAILURE);
	}
	length = read (fd, buffer, BUFSIZE);
	write (1, buffer, length);
	close (fd);
	return (0);
}
