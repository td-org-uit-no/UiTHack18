#include <stdlib.h>
#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>
#include <stdint.h>
#include <sys/mman.h>

void print_menu(void)
{
        printf("\nOverflow playground:\n\t1) Input shellcode\n\t2) Execute shellcode\nChoice: ");
        fflush(stdout);
}

typedef void (*shellcode_function) (void);
void execute_shellcode(shellcode_function shellcode) {
        shellcode();
}

int main(void)
{
        void *shellcode = mmap(NULL, 4096, PROT_READ | PROT_WRITE | PROT_EXEC, MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);
        if (shellcode == MAP_FAILED) {
                perror("Error mmaping memory: ");
                exit(EXIT_SUCCESS);
        }
        char choice[2] = { 0 };

        print_menu();
        while (fgets(choice, 2, stdin) != NULL) {
                switch (choice[0]) {
                        case '1':
                                /* Read bytes until EOF is reached */
                                printf("Input shellcode: ");
                                fflush(stdout);
                                __fpurge(stdin);
                                if (fgets(shellcode, 1000, stdin) == NULL) {
                                        fprintf(stderr, "Unable to read shellcode\n");
                                        exit(EXIT_SUCCESS);
                                }
                                break;
                        case '2':
                                execute_shellcode(shellcode);
                                printf("Shellcode was executed and control returned back to main\n");
                                break;
                        default:
                                fprintf(stderr, "Unknown choice..exiting..\n");
                                exit(EXIT_SUCCESS);
                }
                print_menu();
        }
}
