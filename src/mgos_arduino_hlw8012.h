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

void mgos_hlw8012_cf_interrupt(HLW8012 *hlw);

void mgos_hlw8012_cf1_interrupt(HLW8012 *hlw);

void mgos_hlw8012_begin(HLW8012 *hlw, char cf_pin, char cf1_pin, char sel_pin, char currentWhen, bool use_interrupts, double pulse_timeout);

//void mgos_hlw8012_setMode(HLW8012 *hlw, char mode);

double mgos_hlw8012_getCurrent(HLW8012 *hlw);

double mgos_hlw8012_getVoltage(HLW8012 *hlw);

double mgos_hlw8012_getActivePower(HLW8012 *hlw);

double mgos_hlw8012_getPowerFactor(HLW8012 *hlw);

double mgos_hlw8012_getReactivePower(HLW8012 *hlw);

double mgos_hlw8012_getEnergy(HLW8012 *hlw);

#ifdef __cplusplus
}
#endif

#endif 
