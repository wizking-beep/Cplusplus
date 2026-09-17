#include <iostream>

#define ASIO_STANDALONE
#define PORT 4302
#include <asio.hpp>

/*
building an echo server that spits back the text i send
the process is in 4 stages:
bind -> listen -> accept -> read/write
*/

int main () {

    try{

        //creating the context
    asio::io_context context;

    //attaching the listener(listens for an ipv4 address on port 4302)
    asio::ip::tcp::acceptor acceptor(context,asio::ip::tcp::endpoint(asio::ip::tcp::v4(),PORT));
    
    std::cout << "the server is listening on port: " << PORT << '\n';

    //creating socket for accepted connection
    asio::ip::tcp::socket socket(context);

    //blocking execution until a client connects
    acceptor.accept(socket);

    std::cout << "A client has connected\n";

    for (;;)
    {
       char data[1024];
       asio::error_code error;

       size_t length = socket.read_some(asio::buffer(data),error);

       if(error == asio::error::eof){
        std::cout << "client disconnected.\n";
        break;
       } else if (error)
       {
        throw asio::system_error(error);
       }

       std::cout << "received " << length << "bytes from client,writing back...\n";
       
       asio::write(socket, asio::buffer(data,length),error);

       if(error) {
        throw asio::system_error(error);
       }
    }
    

    } catch(std::exception& e){
        std::cerr << "an exeption occured: " << e.what() << '\n';
    }
    
    return 0;
}