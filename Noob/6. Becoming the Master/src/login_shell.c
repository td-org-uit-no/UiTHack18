#include <stdlib.h>
#include <stdio.h>
#include <memory.h>

void print_menu(void)
{
	printf("\nSelect action:\n\tsetuid - change current user id\n\texec - execute command\n");
}

int main(void)
{
	if (getuid() != 1006) {
		printf("Can't run this login shell as this user\n");
		exit(EXIT_FAILURE);
	}

	printf("Welcome to the final terminal dojo level, are you able to capture the final flag at the very top?\n");

	char buf[100] = { 0 };
	char *nl = NULL;
	for (;;) {
		print_menu();
		fgets(buf, 100, stdin);
		if ((nl = strchr(buf, '\n')) != NULL)
			*nl = '\0';

		if (strcmp("setuid", buf) == 0) {
			printf("Enter new uid: ");
			fgets(buf, 100, stdin);
			int uid = atoi(buf);
			if (uid < 1000) {
				printf("You are not allowed to change to a uid below 1000...\n");
			} else if (uid != 1008) {
				printf("I will not let you change to this uid...\n");
			} else {
				setuid(uid);
			}
		} else if (strcmp("exec", buf) == 0) {
			if (getuid() ==  1006) {
				printf("Sorry, you can't execute stuff\n");
			} else {
				printf("Enter command: ");
				fgets(buf, 100, stdin);
				system(buf);
			}
		}
	}

	return 0;
}
