#include <iostream>

#define ASIO_STANDALONE
#include <asio.hpp>
#include <asio/ts/buffer.hpp>
#include <asio/ts/internet.hpp>

int main() {

    asio::error_code err;

    //initialises an instance,hides the plaform specific requirements for us
    asio::io_context context;

    //address to connect to,the input/endpoint
    asio::ip::tcp::endpoint endpoint(asio::ip::make_address("127.0.0.1",err),80);

    //creating a socket
    asio::ip::tcp::socket socket(context);

    //connect to the socket
    socket.connect(endpoint,err);

    //error handling
    if(!err){
        std::cout << "Socket connected" << '\n';
    } else {
        std::cout << "Error connecting to the socket: " << err.message() << '\n';
    }

return 0;
}
