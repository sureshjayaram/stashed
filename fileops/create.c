#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	int fd;

	fd = creat("testdir/ftests", 0644);	
	if (fd == -1) {
		perror("open");
		return -1;
	}

	return 0;
}

