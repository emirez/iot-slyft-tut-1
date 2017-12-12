#include <Arduino.h>

#include <tfwifi.h>
#include <blinkr_app.h>

// include libs
#include "microcoap/coap.h"
#include "udp_microcoap_wrapper.h"

// Instantiate a WiFiUDP object (from esp8266/arduino)
WiFiUDP Udp;

void setup() {
        Serial.begin(9600);
        setup_wifi();
        blinkr_init();

        // UDP-Listen on port 5683 (default CoAP)
        Udp.begin(5683);

        // setup microcoap lib
        coap_setup();
        // connect UDP object to the endpoints
        udp_microcoap_wrapper_init(&Udp);
}

void loop() {
        blinkr_loop();

        // get coap processing object
        udp_microcoap_wrapper *c = udp_microcoap_wrapper_get();

        // let it handle a message (if one is available via WifiUdp)
        c->ops->handle_udp_coap_message(c);
}
