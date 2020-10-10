#include <stdio.h>
#include <stdlib.h>

#pragma elementWise
int clang1_1(int argc);

#pragma elementWise rule1
int clang1_3xxx(int argc) {
    int b = argc;
    int c = argc + b;
    argc = b + c;
    return argc;
}
#pragma elementWise
int clang1_whoops(int argc);

int clang1_clangt(int argc) {
    int b = argc;
    int c = argc + b;
    argc = b + c;
    return argc;
}
#pragma elementWise
int clang1_x(int argc) {
    int b = argc;
    int c = argc + b;
    argc = b + c;
    return argc;
}

#pragma elementWise
int a = 0;
float are_you_ok(double argc);
float i_am_fine(double argc);
int clang1_3(int argc) {
    int b = argc;
    int c = argc + b;
    argc = b + c;
    return argc;
}

#pragma elementWise
typedef int int32_t;
int clang1_0(int argc) {
    int b = argc;
    int c = argc + b;
    argc = b + c;
    return argc;
}

#pragma elementWise
struct History {
    int yesterday;
    double today;
    char tommorow;
};
int clang1_xwhoops(int argc) {
    int b = argc;
    int c = argc + b;
    argc = b + c;
    return argc;
}

int main(int argc, char **argv) {
    printf("Hello: clang1, case: 3\n");
    return 0;
}
