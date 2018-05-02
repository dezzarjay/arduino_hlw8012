//
// Created by DJ on 29/04/18.
//
#include "mgos_arduino_hlw8012.h"

HLW8012 *mgos_hlw8012_create() {
    return new HLW8012();
}

void mgos_hlw8012_begin(HLW8012 *hlw, char cf_pin, char cf1_pin, char sel_pin, char currentWhen, bool use_interrupts, double pulse_timeout) {
  if (hlw == nullptr) return;
  hlw->begin(cf_pin, cf1_pin, sel_pin, currentWhen, use_interrupts, pulse_timeout);
}




