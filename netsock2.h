#pragma once
// NetSock 2 is a helper class for using network sockets with C++.
//
// Version: 2.0.0a
//
// LICENSE
//   Copyright 2018 Gynvael Coldwind
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.
#include <utility>
#include <cstdint>

namespace netsock {

using tcpport = uint16_t;
using udpport = uint16_t;
using commonport = uint16_t;

// Address that can be commonly used for TCP and UDP purposes.
class CommonV4Addr {
 public:
  std::string addr;
  uint16_t port{0};
};

// A pair of addresses. The local address will be a bind address in
// case of outgoing and listening sockets.
class CommonV4AddrPair {
 public:
  CommonV4Addr local;
  CommonV4Addr remote;
};

// std::error_code
class Error {
 public:
  std::string as_text() const;
  // std::string operator()
};

class TCP {
 public:
  enum class ConnectionType {
    LISTEN,
    CONNECT
  };

  // TODO(gynvael) move connection_type to the end / make default (or actually override)

  TCP(connection_type, std::string_view host, tcpport port);

  // remove copy const






};

// TODO(gynvael): class udp{};

} // netsock

