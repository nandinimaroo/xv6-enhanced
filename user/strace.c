#include "user/user.h"

void strace(int mask, char *command, char *args[])
{
    int pid = fork();
    if (pid == 0)
    {
        trace(mask);
        exec(command, args);
        exit(0);
    }
    else {
        wait(0);
        printf("\n");
    }
}

int main(int argc, char *argv[])
{
    int trace_mask;
    if (argc < 3) {
        printf("usage: strace mask command [args]\n");
        exit(1);
    }

    trace_mask = atoi(argv[1]);

    strace(trace_mask, argv[2], argv + 2);
    exit(0);
}
