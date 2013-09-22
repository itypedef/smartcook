// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "Search.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

class SearchHandler : virtual public SearchIf {
 public:
  SearchHandler() {
    // Your initialization goes here
  }

  void Find(std::vector<Recipe> & _return, const std::string& query) {
    // Your implementation goes here
    printf("Find\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<SearchHandler> handler(new SearchHandler());
  shared_ptr<TProcessor> processor(new SearchProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}
