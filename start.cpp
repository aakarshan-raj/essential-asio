#include <iostream>
#include <asio.hpp>  //header based lib

int main(){


	asio::io_context io;
	asio::steady_timer t(io,asio::chrono::seconds(5));
	t.wait();
	std::cout<<"Wait is over!"<<std::endl;

}