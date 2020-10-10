#include <stdio.h>
#include <stdlib.h>

int clang1_hello(int argc) {
    int b = argc;
    int c = argc + b;
    argc = b + c;
    return argc;
}
#pragma elementWise
int clang1_1(int argc) {
    int b = argc;
    int c = argc + b;
    argc = b + c;
    return argc;
}


int main(int argc, char **argv) {
    printf("Hello: clang1, case: 1\n");
    return 0;
}
