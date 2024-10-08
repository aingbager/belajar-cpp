#include <boost/asio.hpp>
#include <boost/asio/detail/chrono.hpp>
#include <boost/asio/io_context.hpp>
#include <boost/asio/steady_timer.hpp>
#include <iostream>

int main (int argc, char *argv[]) {
  boost::asio::io_context io;

  boost::asio::steady_timer timer(io, boost::asio::chrono::seconds(5));

  std::cout << "timer dimulai tunggu 5 detik.." << std::endl;

  timer.wait();
  std::cout << "waktu habis" << std::endl;
  return 0;
}
