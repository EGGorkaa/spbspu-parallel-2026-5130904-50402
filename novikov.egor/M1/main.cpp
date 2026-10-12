#include <iostream>
#include "circle.hpp"
#include <stdexcept>

int main(int argc, char *argv[])
{
  if (argc < 3 || argc > 4) {
    std::cerr << "Invalid quantity of arguments\n";
    return 1;
  }

  size_t threads = 1;
  size_t tries = 0;

  try {
    threads = std::stoul(argv[1]);
    tries = std::stoul(argv[2]);
  } catch (const std::exception &) {
    std::cerr << "Invalid threads of tries\n";
    return 1;
  }

  if (tries == 0) {
    std::cerr << "Tries can't be zero\n";
    return 1;
  }

  if (threads == 0) {
    threads = 1;
  }
}
