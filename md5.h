// Copyright 2020-2021 The jdh99 Authors. All rights reserved.
// calc md5
// Authors: jdh99 <jdh821@163.com>

#ifndef MD5_H
#define MD5_H

#include <stdint.h>

// MD5 len
#define MD5_LEN 16

// MD5Calc calc md5
// out is md5 result.Notice out array size is greater than 16
void MD5Calc(uint8_t* data, int len, uint8_t* out);

#endif
