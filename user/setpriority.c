#include "user/user.h"

int main(int argc, char *argv[])
{
    int arg1, arg2;
    arg1 = atoi(argv[1]);
    arg2 = atoi(argv[2]);

    if (argc != 3)
    {
        fprintf(2, "Usage: setpriority priority pid\n");
        exit(1);
    }
    
    set_priority(arg1, arg2);
    exit(0);
}