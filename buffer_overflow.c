#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <signal.h>

int my_size[12] = [];// list of 12 integers which represent buff size. Hint: You might want to check this in gdb.
int r;
int buffer_size;
void clean_exit_on_sig(int sig_num);

int v01d3m012t(char* input) {

    printf("My Buff Size is %d\n", my_size[r]);

    if(strlen(input) > {threshold}){   // Hint: You might want to check the threshold in order to get the exit function address.
        printf("Oops you found my location - %p.\n", (void*)&exit);
    }

    char buff[my_size[r]];

    strcpy(buff, input);

    printf("I am tough to catch. Try again!\n");
    return 0;
}

void clean_exit_on_sig(int sig_num)
{
    printf("\n Oh! You just tried Seg faulting me! Try again!");
    exit(0);
}

int main(int argc, char *argv[])
{
    printf(" ___ _          _                 __   ___                _                _            \n");
    printf("| _ (_)_ _ __ _| |_ ___ ___  ___ / _| / __| __ _ __ _ _ _| |__ _ _ _  _ __| |_____ _ _  \n");
    printf("|  _/ | '_/ _` |  _/ -_|_-< / _ \\  _| \\__ \\/ _` / _` | '_| '_ \\ '_| || / _| / / -_) ' \\ \n");
    printf("|_| |_|_| \\__,_|\\__\\___/__/ \\___/_|   |___/\\__,_\\__,_|_| |_.__/_|  \\_,_\\__|_\\_\\___|_||_|\n");

    printf("\nWelcome Onboard to the world of pirates\n");
    printf("We have stolen your flag. Break me before I change with time\n");

    void (*signal(int signum, void (*sighandler)(int)))(int);

    signal(SIGSEGV, clean_exit_on_sig);
    
    char input[512];
    do{
        printf("Enter the password to break me\n");
        fgets(input, sizeof(input), stdin);
        
        if (strlen(input) < 2) {
            printf("Hey dont be afraid\n");
            continue;
        }else{
            srand(time(NULL));
            r = rand() % 12;
            v01d3m012t(input);
        }

    } while(1);


    return 0;
}