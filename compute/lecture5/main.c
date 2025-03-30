#include <stdio.h>
#include <stdlib.h>

#include "log.h"

int main(const int argc, const char* argv[]) {
    if (argc < 2) {
        fprintf(stderr, "not enought args: %s <log arg>\n", argv[0]);
        return EXIT_FAILURE;
    }

    float x = atof(argv[1]);
    printf("x: %f\n", x);

    float res = logf(x);

    printf("result: %f\n", res);

    return 0;
}
