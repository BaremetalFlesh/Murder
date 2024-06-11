#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <process_name>\n", argv[0]);
        return 1;
    }

    char command[100];
    snprintf(command, sizeof(command), "sudo killall -9 %s", argv[1]);
    system(command);

    return 0;
}
