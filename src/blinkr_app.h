#ifndef __BLINKR_APP_H
#define __BLINKR_APP_H

void blinkr_init(int ledpin = LED_BUILTIN);

void blinkr_set_frequency(int on_duration_msec, int off_duration_msec);

void blinkr_loop();

#endif
