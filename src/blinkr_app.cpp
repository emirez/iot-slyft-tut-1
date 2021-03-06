#include <Arduino.h>
#include "blinkr_app.h"

int __on_duration_msec = 500;
int __off_duration_msec  = 500;
int __state = 0;
int __ledpin = LED_BUILTIN;

void blinkr_init(int ledpin) {
    __ledpin = ledpin;
    pinMode(__ledpin, OUTPUT);
}

void blinkr_set_frequency(int on_duration_msec, int off_duration_msec) {
    __on_duration_msec = on_duration_msec;
    __off_duration_msec = off_duration_msec;
}

void blinkr_loop() {
    __state = !__state;
    delay(__state?__on_duration_msec:__off_duration_msec);
    digitalWrite(__ledpin, __state);
}
// Generated by slyft.io
// This code part has been generated on an "as is" basis, without warranties or conditions of any kind.

// application-part

#include "Arduino.h"

#include "microcoap/coap.h"
#include "coapled_app.h"

// include data structure headers
#include "blinkr.h"

//
// CoAP Application level handlers
//

// -- Application level handler for POST to /led
bool TUT1__coapled__post___led(
    struct TUT1__coapled__post___led_req *req,
    struct TUT1__coapled__post___led_resp *resp) {

    // grab out the data structure
    struct TUT1__blinkr *b = &req->data.blinkr;

    blinkr_set_frequency(b->on_d, b->off_d);
    Serial.print("TUT1__coapled__post___led set on_d=");
    Serial.print(b->on_d);
    Serial.print(",off_d=");
    Serial.print(b->off_d);
    Serial.println();

    // give back the CHANGED response code to coap client
    resp->response_code = COAP_RSPCODE_CHANGED;

    return true;
}
