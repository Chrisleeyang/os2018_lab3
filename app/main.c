#include "lib.h"
#include "types.h"
int data=0;
int uEntry(void) {
	int ret = fork();
	int i = 8;
        if (ret == 0) {
        data = 2;
        while (i != 0) {
            i--;
            printf("Child Process: Pong %d, %d;\n", data, i);
            sleep(64);
        }
        exit();
    } else if (ret != -1) {
        data = 1;
        while (i != 0) {
            i--;
            printf("Father Process: Ping %d, %d;\n", data, i);
            sleep(64);
        }
        exit();
    }

    // should not reach here
    return 0;
}
