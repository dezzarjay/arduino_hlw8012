//
// Created by DJ on 29/04/18.
//
#include "mgos_arduino_hlw8012.h"

HLW8012 *mgos_hlw8012_create() {
    return new HLW8012();
}

void mgos_hlw8012_begin(HLW8012 *hlw) {
  if (hlw == nullptr) return;
  hlw->begin();
}

double mgos_hlw8012_getCurrent(HLW8012 *hlw) {
     return (hlw == nullptr) ? -1 : hlw->getCurrent();
}

double mgos_hlw8012_getVoltage(HLW8012 *hlw) {
     return (hlw == nullptr) ? -1 : hlw->getVoltage();
}


