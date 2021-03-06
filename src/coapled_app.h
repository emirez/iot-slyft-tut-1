
// Generated by slyft.io
// This code part has been generated on an "as is" basis, without warranties or conditions of any kind.

// application-part header



    #include "Arduino.h"

#include "microcoap/coap.h"

// include data structure headers
#include "blinkr.h"

// struct TUT1__blinkr
#include "blinkr.h"



//
// CoAP Application level handlers
//

// -- POST  /led

struct TUT1__coapled__post___led_req {
    struct {

        struct TUT1__blinkr  blinkr;

    } data;
};

struct TUT1__coapled__post___led_resp {
    coap_responsecode_t  response_code;
    struct {

    } data;
};

// -- Application level handler for POST to /led
bool TUT1__coapled__post___led(
    struct TUT1__coapled__post___led_req *req,
    struct TUT1__coapled__post___led_resp *resp);


