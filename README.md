# md5

## 介绍
计算16字节128位md5码。

## 开源
- [github上的项目地址](https://github.com/jdhxyy/md5-clang)
- [gitee上的项目地址](https://gitee.com/jdhxyy/md5-clang)

## API
```c
// MD5 len
#define MD5_LEN 16

// MD5Calc calc md5
// out is md5 result.Notice out array size is greater than 16
void MD5Calc(uint8_t* data, int len, uint8_t* out);
```

## 测试
测试框架使用的是[适合于嵌入式系统的C语言单元测试框架:Scunit](https://blog.csdn.net/jdh99/article/details/100183066)
使用cip可以安装依赖的包:[cip：C/C++包管理工具](https://blog.csdn.net/jdh99/article/details/115590099)

```c
#include <stdio.h>
#include "md5.h"
#include "scunit.h"

static void testMD5(void);

int main() {
    ScunitLoad((ScunitPrintFunc)printf);
        ScunitAddSuite("test crc16");
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
```

输出:
```text
Suite:test md5
-------------------->case:testMD5 begin
testMD5 tag:1 SCUNIT_ASSERT pass
-------------------->case:testMD5 end
```

## 参考链接
- [c语言：md5函数](https://www.cnblogs.com/fhefh/archive/2011/10/28/2228241.html)
- [MD5 Algorithm](http://www.kleinschmidt.com/edi/md5.htm)
