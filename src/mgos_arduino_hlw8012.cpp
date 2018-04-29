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

// potential error area
/*void mgos_hlw8012_setMode(HLW8012 *hlw, char mode) {
  if (hlw == nullptr) return;
  hlw->setMode(mode);
} */

double mgos_hlw8012_getCurrent(HLW8012 *hlw) {
     return (hlw == nullptr) ? -1 : hlw->getCurrent();
}

double mgos_hlw8012_getVoltage(HLW8012 *hlw) {
     return (hlw == nullptr) ? -1 : hlw->getVoltage();
}

double mgos_hlw8012_getActivePower(HLW8012 *hlw) {
     return (hlw == nullptr) ? -1 : hlw->getActivePower();
}

double mgos_hlw8012_getApparentPower(HLW8012 *hlw) {
     return (hlw == nullptr) ? -1 : hlw->getApparentPower();
}

double mgos_hlw8012_getReactivePower(HLW8012 *hlw) {
     return (hlw == nullptr) ? -1 : hlw->getReactivePower();
}

double mgos_hlw8012_getPowerFactor(HLW8012 *hlw) {
     return (hlw == nullptr) ? -1 : hlw->getPowerFactor();
}

double mgos_hlw8012_getEnergy(HLW8012 *hlw) {
     return (hlw == nullptr) ? -1 : hlw->getEnergy();
}

void cf_interrupt(HLW8012 *hlw) {
  if (hlw == nullptr) return;
  hlw->cf_interrupt();
}

void cf1_interrupt(HLW8012 *hlw) {
  if (hlw == nullptr) return;
  hlw->cf1_interrupt();
}


