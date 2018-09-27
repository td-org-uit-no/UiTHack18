#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


struct user {
        bool privileged;
        char padding[7];
        char first_name[20];
        char last_name[20];
        char username[20];
        char password[20];
};

void print_menu(void)
{
        printf("\nOptions:\n\t1) Read note\n\t2) Write note\n\t3) Print user info\n\t4) Read flag (privileged operation)\n\tq) Log out and quit\n\nEnter choice: ");
}

int main(void)
{
        char username[20] = { 0 };
        char password[20] = { 0 };
        struct user normal_user = {
                false,
                "",
                "Ola",
                "Nordmann",
                "ola",
                "passord_123!"
        };
        char note[100] = { 0 };
        static char stored_first_name[20] = { 0 };
        static char stored_last_name[20] = { 0 };
        static char stored_username[20] = { 0 };
        static char stored_password[20] = { 0 };
        strncpy(stored_first_name, normal_user.first_name, 20);
        strncpy(stored_last_name, normal_user.last_name, 20);
        strncpy(stored_username, normal_user.username, 20);
        strncpy(stored_password, normal_user.password, 20);


        printf("Username: ");
        if (fgets(username, 19, stdin) == NULL) {
                fprintf(stderr, "Error reading username");
                exit(EXIT_FAILURE);
        } else {
                char *newline = strchr(username, '\n');
                if (newline)
                        *newline = '\0';
        }

        printf("Password: ");
        if (fgets(password, 19, stdin) == NULL) {
                fprintf(stderr, "Error reading password");
                exit(EXIT_FAILURE);
        } else {
                char *newline = strchr(password, '\n');
                if (newline)
                        *newline = '\0';
        }

        if (strcmp(normal_user.username, username) != 0 ||
            strcmp(normal_user.password, password) != 0) {
                fprintf(stderr, "Error, wrong username and password combination");
                exit(EXIT_FAILURE);
        } else {
                printf("\nWelcome to OneLineNote %s %s\n", normal_user.first_name, normal_user.last_name);
        }

        char choice[2] = { 0 };
        print_menu();
        __fpurge(stdin);
        while (fgets(choice, 2, stdin) != NULL) {
                switch (choice[0]) {
                        case '1':
                                printf("Note contents: %s\n", note);
                                break;
                        case '2':
                                printf("Enter note: ");
                                __fpurge(stdin);
                                fgets(note, 199, stdin);

                                /* Perform integrity check */
                                if (strcmp(normal_user.first_name, stored_first_name) != 0 ||
                                    strcmp(normal_user.last_name, stored_last_name)   != 0 ||
                                    strcmp(normal_user.username, stored_username)     != 0 ||
                                    strcmp(normal_user.password, stored_password)     != 0) {
                                        fprintf(stderr, "Integrity check failed, overflow detected! Exiting..\n");
                                        exit(EXIT_FAILURE);
                                }
                                        
                                break;
                        case '3':
                                printf("User info:\n\tPrivileged: %s\n\tFirst Name: %s\n\tLast Name: %s\n\tUsername: %s\n\tPassword: %s\n",
                                                normal_user.privileged ? "true" : "false",
                                                normal_user.first_name,
                                                normal_user.last_name,
                                                normal_user.username,
                                                normal_user.password);
                                break;
                        case '4':
                                if (normal_user.privileged) {
                                        FILE *flag = fopen("flag.txt", "r");
                                        while (!feof(flag)) {
                                                char c = fgetc(flag);
                                                if (feof(flag))
                                                        break;
                                                fputc(c, stdout);
                                        }
                                } else {
                                        printf("You must be privileged to get the flag, but %s is not privileged!\n", normal_user.username);
                                }
                                break;
                        case 'q':
                                printf("Logging out and quitting application\n");
                                exit(EXIT_SUCCESS);
                        default:
                                printf("Unknown choice, exiting..\n");
                                exit(EXIT_FAILURE);
                }
                print_menu();
                choice[0] = '\0';
                __fpurge(stdin);
        }
}
