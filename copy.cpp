#include <unistd.h>

#define BUFSIZE 1024

int main ()
{
	char buffer [BUFSIZE];
	ssize_t length;

	while ((length = read (0, buffer, BUFSIZE)) > 0){
		write (1, buffer, length);
	}
	return (0);
}
