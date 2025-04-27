
#ifndef BME1305_H
#define BME1305_H

#include "pico/stdlib.h"
#include "hardware/i2c.h"

#define BME1305_ADDR 0x76  // 0x77 if SDO is high

typedef struct {
    float temp;
    float press;
    float hum;
} bme1305data;

void bme1305_init(i2c_inst_t *i2c);
bme1305data bme1305_read(i2c_inst_t *i2c);

#endif
