#include "log.h"

#include <math.h>
#include <stdint.h>
#include <stdio.h>

#define FLOAT_SIGN_MASK         0b10000000000000000000000000000000
#define FLOAT_EXPONENT_MASK     0b01111111100000000000000000000000
#define FLOAT_MANTISSA_MASK     0b00000000011111111111111111111111
#define FLOAT_EXPONENT_MSB_OFF  0b00111111100000000000000000000000

#define FLOAT_SIGN_LEN 1
#define FLOAT_EXPONENT_LEN 8
#define FLOAT_MANTISSA_LEN 23

#define FLOAT_SIGN(x_)     ( (  (*(int32_t*)&(x_))  ) & FLOAT_SIGN_MASK )
#define FLOAT_EXPONENT(x_) ( (  (*(int32_t*)&(x_))  ) & FLOAT_EXPONENT_MASK)
#define FLOAT_MANTISSA(x_) ( (  (*(int32_t*)&(x_))  ) & FLOAT_MANTISSA_MASK)

#define LN2 (0.6931471806f)

static float logf12(float x);
static int extract_expf(float x);
static float extract_mant(float x);

// FIXME subnormal
float logf(float x) {
    if (x <= 0) {
        return NAN;
    }

    // printf("exp: %d\n", extract_expf(x));
    // printf("mant: %f\n", extract_mant(x));

    float m = extract_mant(x);
    int e = extract_expf(x);

    return logf12(m) + (e * LN2);
}

static float logf12(float x) {
    return 3.0f * (x * x - 1.0f) / (x * x + 4.0f * x + 1.0f);
}

static int extract_expf(float x) {
    int e = FLOAT_EXPONENT(x) >> FLOAT_MANTISSA_LEN;
    return e - 127; // 127 = 2^8 - 1
}

static float extract_mant(float x) {
    int mi = FLOAT_MANTISSA(x) | FLOAT_EXPONENT_MSB_OFF;
    float m = *(float*)&mi;
    return m;
}
