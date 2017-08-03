/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef dialog_TYPES_H
#define dialog_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace dialog { namespace rpc {

enum rpc_storage_mode {
  RPC_IN_MEMORY = 0,
  RPC_DURABLE_RELAXED = 1,
  RPC_DURABLE = 2
};

extern const std::map<int, const char*> _rpc_storage_mode_VALUES_TO_NAMES;

enum rpc_data_type {
  RPC_NONE = 0,
  RPC_BOOL = 1,
  RPC_CHAR = 2,
  RPC_SHORT = 3,
  RPC_INT = 4,
  RPC_LONG = 5,
  RPC_FLOAT = 6,
  RPC_DOUBLE = 7,
  RPC_STRING = 8,
  RPC_RECORD = 9,
  RPC_ALERT = 10
};

extern const std::map<int, const char*> _rpc_data_type_VALUES_TO_NAMES;

enum rpc_iterator_type {
  RPC_ADHOC = 0,
  RPC_PREDEF = 1,
  RPC_COMBINED = 2,
  RPC_ALERTS = 3
};

extern const std::map<int, const char*> _rpc_iterator_type_VALUES_TO_NAMES;

typedef std::vector<class rpc_column>  rpc_schema;

typedef int64_t rpc_iterator_id;

typedef int32_t rpc_handler_id;

class rpc_column;

class rpc_iterator_descriptor;

class rpc_iterator_handle;

class rpc_record_block;

class rpc_record_batch;

class rpc_management_exception;

class rpc_invalid_operation;


class rpc_column {
 public:

  rpc_column(const rpc_column&);
  rpc_column(rpc_column&&);
  rpc_column& operator=(const rpc_column&);
  rpc_column& operator=(rpc_column&&);
  rpc_column() : type_id(0), type_size(0), name() {
  }

  virtual ~rpc_column() throw();
  int32_t type_id;
  int32_t type_size;
  std::string name;

  void __set_type_id(const int32_t val);

  void __set_type_size(const int32_t val);

  void __set_name(const std::string& val);

  bool operator == (const rpc_column & rhs) const
  {
    if (!(type_id == rhs.type_id))
      return false;
    if (!(type_size == rhs.type_size))
      return false;
    if (!(name == rhs.name))
      return false;
    return true;
  }
  bool operator != (const rpc_column &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const rpc_column & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(rpc_column &a, rpc_column &b);

inline std::ostream& operator<<(std::ostream& out, const rpc_column& obj)
{
  obj.printTo(out);
  return out;
}


class rpc_iterator_descriptor {
 public:

  rpc_iterator_descriptor(const rpc_iterator_descriptor&);
  rpc_iterator_descriptor(rpc_iterator_descriptor&&);
  rpc_iterator_descriptor& operator=(const rpc_iterator_descriptor&);
  rpc_iterator_descriptor& operator=(rpc_iterator_descriptor&&);
  rpc_iterator_descriptor() : id(0), type((rpc_iterator_type)0), data_type((rpc_data_type)0), handler_id(0) {
  }

  virtual ~rpc_iterator_descriptor() throw();
  rpc_iterator_id id;
  rpc_iterator_type type;
  rpc_data_type data_type;
  rpc_handler_id handler_id;

  void __set_id(const rpc_iterator_id val);

  void __set_type(const rpc_iterator_type val);

  void __set_data_type(const rpc_data_type val);

  void __set_handler_id(const rpc_handler_id val);

  bool operator == (const rpc_iterator_descriptor & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(type == rhs.type))
      return false;
    if (!(data_type == rhs.data_type))
      return false;
    if (!(handler_id == rhs.handler_id))
      return false;
    return true;
  }
  bool operator != (const rpc_iterator_descriptor &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const rpc_iterator_descriptor & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(rpc_iterator_descriptor &a, rpc_iterator_descriptor &b);

inline std::ostream& operator<<(std::ostream& out, const rpc_iterator_descriptor& obj)
{
  obj.printTo(out);
  return out;
}


class rpc_iterator_handle {
 public:

  rpc_iterator_handle(const rpc_iterator_handle&);
  rpc_iterator_handle(rpc_iterator_handle&&);
  rpc_iterator_handle& operator=(const rpc_iterator_handle&);
  rpc_iterator_handle& operator=(rpc_iterator_handle&&);
  rpc_iterator_handle() : data(), num_entries(0), has_more(0) {
  }

  virtual ~rpc_iterator_handle() throw();
  rpc_iterator_descriptor desc;
  std::string data;
  int32_t num_entries;
  bool has_more;

  void __set_desc(const rpc_iterator_descriptor& val);

  void __set_data(const std::string& val);

  void __set_num_entries(const int32_t val);

  void __set_has_more(const bool val);

  bool operator == (const rpc_iterator_handle & rhs) const
  {
    if (!(desc == rhs.desc))
      return false;
    if (!(data == rhs.data))
      return false;
    if (!(num_entries == rhs.num_entries))
      return false;
    if (!(has_more == rhs.has_more))
      return false;
    return true;
  }
  bool operator != (const rpc_iterator_handle &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const rpc_iterator_handle & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(rpc_iterator_handle &a, rpc_iterator_handle &b);

inline std::ostream& operator<<(std::ostream& out, const rpc_iterator_handle& obj)
{
  obj.printTo(out);
  return out;
}


class rpc_record_block {
 public:

  rpc_record_block(const rpc_record_block&);
  rpc_record_block(rpc_record_block&&);
  rpc_record_block& operator=(const rpc_record_block&);
  rpc_record_block& operator=(rpc_record_block&&);
  rpc_record_block() : time_block(0), data(), nrecords(0) {
  }

  virtual ~rpc_record_block() throw();
  int64_t time_block;
  std::string data;
  int64_t nrecords;

  void __set_time_block(const int64_t val);

  void __set_data(const std::string& val);

  void __set_nrecords(const int64_t val);

  bool operator == (const rpc_record_block & rhs) const
  {
    if (!(time_block == rhs.time_block))
      return false;
    if (!(data == rhs.data))
      return false;
    if (!(nrecords == rhs.nrecords))
      return false;
    return true;
  }
  bool operator != (const rpc_record_block &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const rpc_record_block & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(rpc_record_block &a, rpc_record_block &b);

inline std::ostream& operator<<(std::ostream& out, const rpc_record_block& obj)
{
  obj.printTo(out);
  return out;
}


class rpc_record_batch {
 public:

  rpc_record_batch(const rpc_record_batch&);
  rpc_record_batch(rpc_record_batch&&);
  rpc_record_batch& operator=(const rpc_record_batch&);
  rpc_record_batch& operator=(rpc_record_batch&&);
  rpc_record_batch() : nrecords(0) {
  }

  virtual ~rpc_record_batch() throw();
  std::vector<rpc_record_block>  blocks;
  int64_t nrecords;

  void __set_blocks(const std::vector<rpc_record_block> & val);

  void __set_nrecords(const int64_t val);

  bool operator == (const rpc_record_batch & rhs) const
  {
    if (!(blocks == rhs.blocks))
      return false;
    if (!(nrecords == rhs.nrecords))
      return false;
    return true;
  }
  bool operator != (const rpc_record_batch &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const rpc_record_batch & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(rpc_record_batch &a, rpc_record_batch &b);

inline std::ostream& operator<<(std::ostream& out, const rpc_record_batch& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _rpc_management_exception__isset {
  _rpc_management_exception__isset() : msg(false) {}
  bool msg :1;
} _rpc_management_exception__isset;

class rpc_management_exception : public ::apache::thrift::TException {
 public:

  rpc_management_exception(const rpc_management_exception&);
  rpc_management_exception(rpc_management_exception&&);
  rpc_management_exception& operator=(const rpc_management_exception&);
  rpc_management_exception& operator=(rpc_management_exception&&);
  rpc_management_exception() : msg() {
  }

  virtual ~rpc_management_exception() throw();
  std::string msg;

  _rpc_management_exception__isset __isset;

  void __set_msg(const std::string& val);

  bool operator == (const rpc_management_exception & rhs) const
  {
    if (!(msg == rhs.msg))
      return false;
    return true;
  }
  bool operator != (const rpc_management_exception &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const rpc_management_exception & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(rpc_management_exception &a, rpc_management_exception &b);

inline std::ostream& operator<<(std::ostream& out, const rpc_management_exception& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _rpc_invalid_operation__isset {
  _rpc_invalid_operation__isset() : msg(false) {}
  bool msg :1;
} _rpc_invalid_operation__isset;

class rpc_invalid_operation : public ::apache::thrift::TException {
 public:

  rpc_invalid_operation(const rpc_invalid_operation&);
  rpc_invalid_operation(rpc_invalid_operation&&);
  rpc_invalid_operation& operator=(const rpc_invalid_operation&);
  rpc_invalid_operation& operator=(rpc_invalid_operation&&);
  rpc_invalid_operation() : msg() {
  }

  virtual ~rpc_invalid_operation() throw();
  std::string msg;

  _rpc_invalid_operation__isset __isset;

  void __set_msg(const std::string& val);

  bool operator == (const rpc_invalid_operation & rhs) const
  {
    if (!(msg == rhs.msg))
      return false;
    return true;
  }
  bool operator != (const rpc_invalid_operation &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const rpc_invalid_operation & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(rpc_invalid_operation &a, rpc_invalid_operation &b);

inline std::ostream& operator<<(std::ostream& out, const rpc_invalid_operation& obj)
{
  obj.printTo(out);
  return out;
}

}} // namespace

#include "dialog_types.tcc"

#endif
