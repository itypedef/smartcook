/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef search_TYPES_H
#define search_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>




typedef struct _Recipe__isset {
  _Recipe__isset() : title(false) {}
  bool title;
} _Recipe__isset;

class Recipe {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  Recipe() : title() {
  }

  virtual ~Recipe() throw() {}

  std::string title;

  _Recipe__isset __isset;

  void __set_title(const std::string& val) {
    title = val;
  }

  bool operator == (const Recipe & rhs) const
  {
    if (!(title == rhs.title))
      return false;
    return true;
  }
  bool operator != (const Recipe &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Recipe & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Recipe &a, Recipe &b);



#endif
