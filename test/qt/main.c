#include <stdio.h>
#include "md5.h"
#include "scunit.h"

static void testMD5(void);

int main() {
    ScunitLoad((ScunitPrintFunc)printf);
        ScunitAddSuite("test md5");
        ScunitAddTest("testMD5", testMD5);
    return 0;
}

static void testMD5(void) {
    uint8_t out[16] = {0};
    char* str = "hellojdh";
    MD5Calc((uint8_t*)str, (int)strlen(str), out);

    // de56197c9dd72b188c0709a239c9a390
    uint8_t result[32] = {0xde, 0x56, 0x19, 0x7c, 0x9d, 0xd7, 0x2b, 0x18, 0x8c, 0x07, 0x09, 0xa2, 0x39, 0xc9, 0xa3, 0x90};
    ScunitAssert(memcmp(out, result, 16) == 0, "1");
}
