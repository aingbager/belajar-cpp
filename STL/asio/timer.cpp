#include <boost/asio.hpp>
#include <boost/asio/detail/chrono.hpp>
#include <boost/asio/io_context.hpp>
#include <boost/asio/steady_timer.hpp>
#include <boost/system/detail/error_code.hpp>
#include <iostream>

void time_handler(const boost::system::error_code& /*e*/){
  std::cout << "waktu habis (calbak)" << std::endl;
}

int main (int argc, char *argv[]) {
  boost::asio::io_context io;

  boost::asio::steady_timer timer(io,boost::asio::chrono::seconds(5));
  std::cout << "timer dimulat 5 detik." << std::endl;

  timer.async_wait(&time_handler);

  io.run();


  return 0;
}
