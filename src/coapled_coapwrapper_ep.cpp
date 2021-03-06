// Generated by slyft.io
// This code part has been generated on an "as is" basis, without warranties or conditions of any kind.

// endpoints

#include "microcoap/coap.h"


static const coap_endpoint_path_t TUT1__coapled__paths_get_well_known_core = {2, {".well-known", "core"}};


// enumerate all single resources as endpoint_path types

static const coap_endpoint_path_t TUT1__coapled__paths__led = {1, {"led"}};

// define handler functions

int TUT1__coapled__handle_get_well_known_core(coap_rw_buffer_t *scratch,
    const coap_packet_t *inpkt, coap_packet_t *outpkt,
    uint8_t id_hi, uint8_t id_lo);

int TUT1__coapled__handle_post___led(coap_rw_buffer_t *scratch,
    const coap_packet_t *inpkt, coap_packet_t *outpkt,
    uint8_t id_hi, uint8_t id_lo);


// define array with all endpoints
extern const coap_endpoint_t endpoints[] =
{

    {COAP_METHOD_GET, TUT1__coapled__handle_get_well_known_core, &TUT1__coapled__paths_get_well_known_core, "ct=40"},

    {COAP_METHOD_POST, TUT1__coapled__handle_post___led, &TUT1__coapled__paths__led, "ct=0"},	/* Make LED blink with given frequency, returns status code. */
    {(coap_method_t)0, NULL, NULL, NULL}
};
