//
// Created by DJ on 29/04/18.
//

#ifndef ARDUINO_HLW8012_H_MGOS_ARDUINO_HLW8012_C_H
#define ARDUINO_HLW8012_H_MGOS_ARDUINO_HLW8012_C_H

#include "HLW8012.h"

#ifdef __cplusplus
extern "C" {
#endif

HLW8012 *mgos_hlw8012_create();

void mgos_hlw8012_begin(HLW8012 *hlw, char cf_pin, char cf1_pin, char sel_pin, char currentWhen, bool use_interrupts);

double mgos_hlw8012_getCurrent(HLW8012 *hlw);

double mgos_hlw8012_getVoltage(HLW8012 *hlw);

#ifdef __cplusplus
}
#endif

#endif 
