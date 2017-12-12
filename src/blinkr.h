

// Generated by slyft.io
// This code part has been generated on an "as is" basis, without warranties or conditions of any kind.

// slyftlet=c99-generic-msgpack

#ifndef tut1_BLINKR_H
#define tut1_BLINKR_H

#include "mpack/mpack.h"

struct TUT1__blinkr {
  /* msec, how long to have LED turned on */
  int32_t	on_d;
  /* msec, how long to have LED turned off */
  int32_t	off_d;
  /* times of repetitions. Optional. If not given, run forever */
  int32_t	t;

  /**
  * Wipes contents to \0
  * @param self      pointer to target struct TUT1__blinkr
  */
  void (*TUT1__blinkr_clean)(struct TUT1__blinkr *self);

  /**
  * Given an input buffer and its size, this functions parses the elements
  * of struct TUT1__blinkr
  * @param self          pointer to target struct TUT1__blinkr
  * @param input_buf     input buffer
  * @param sz_input_buf  size of input buffer
  * @return 0=success, 1=error
  */
  int (*TUT1__blinkr_parse)(struct TUT1__blinkr *self, const uint8_t *input_buf, size_t sz_input_buf);

  /**
  * Given a msgpack reader, this functions parses the elements
  * of struct TUT1__blinkr
  * @param self          pointer to target struct TUT1__blinkr
  * @param reader        pointer to mpack reader struct
  */
  void (*TUT1__blinkr_parse_mpack)(struct TUT1__blinkr *self, mpack_reader_t *reader);

  /**
  * Given a struct TUT1__blinkr, this function serializes it into given output buffer.
  * @param self              pointer to source struct TUT1__blinkr
  * @param output_buf        output buffer
  * @param sz_output_buf     size of output buffer
  * @return Length of output buf (0=error)
  */
  size_t (*TUT1__blinkr_serialize)(const struct TUT1__blinkr *self, uint8_t *output_buf, size_t sz_output_buf);

  /**
  * Given a struct TUT1__blinkr, this function serializes it into given mpack writer.
  * @param self              pointer to source struct TUT1__blinkr
  * @param writer 	         pointer to mpack writer struct
  */
  void (*TUT1__blinkr_serialize_mpack)(const struct TUT1__blinkr *self, mpack_writer_t *writer);

};

/**
 * Initializes struct struct TUT1__blinkr. empties fields, sets function pointers
 * @param self  struct TUT1__blinkr
 */
void TUT1__blinkr_init(struct TUT1__blinkr *self);


/* ORIGINAL SCHEMA
{"$schema"=>"http://json-schema.org/draft-04/schema#", "id"=>"blinkr", "title"=>"Making a blinky API out of this", "description"=>"Specify blink mode, duration etc. for an embedded device LED", "type"=>"object", "properties"=>{"on_d"=>{"type"=>"integer", "description"=>"msec, how long to have LED turned on"}, "off_d"=>{"type"=>"integer", "description"=>"msec, how long to have LED turned off"}, "t"=>{"type"=>"integer", "description"=>"times of repetitions. Optional. If not given, run forever"}}, "additionalProperties"=>false, "required"=>["on_d", "off_d"], "minProperties"=>2}
 */
#endif		//tut1_BLINKR_H
