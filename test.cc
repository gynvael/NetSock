#include <string_view>
#include <string>
#include <cstdio>
#include "netsock2.h"


int main(void) {

  auto [addr, ip] = ("asdf", 123);


  netsock::TCP client(netsock::CONNECT, "gynvael.coldwind.pl", 123);


}

