#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	int fd;
	char buf[32];
	ssize_t bytes_read = 0;

	fd = open("testdir/f_rdwr", O_CREAT|O_RDWR, 0644);
	if (fd == -1) {
		perror("open");
		return -1;
	}
	bytes_read = read(fd, buf, sizeof(buf));
	if (bytes_read == -1) {
		perror("write");
		goto err_exit;
	}
	printf("%s", buf);
	close(fd);
	return 0;
err_exit:
	close(fd);
	return -1;
}
