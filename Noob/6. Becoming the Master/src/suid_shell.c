#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main(int argc, char *argv[])
{
	if (argc < 2) {
		printf("Usage: %s <uid>\n", argv[0]);
		return -1;
	}

	if (getuid() != 1009) {
		printf("You are not allowed to spawn a shell..\n");
		return -1;
	}

	int uid = atoi(argv[1]);
	if (uid <= 1000) {
		printf("You are not permitted to spawn a shell as uid=%d\n", uid);
		return -1;
	}

	if (setuid(uid) != 0) {
		printf("Error: unable to set uid to %d\n", uid);
		return -1;
	}
	system("/bin/bash");
	
	return 0;
}
