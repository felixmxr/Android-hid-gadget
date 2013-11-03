#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
		usleep(atoi(argv[1])*1000));
        exit(0);
}
