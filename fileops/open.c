#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	int fd;

	fd = open("testdir/ftests", O_RDWR);	
	if (fd == -1) {
		perror("open");
		return -1;
	}

	close(fd);
	return 0;
}

