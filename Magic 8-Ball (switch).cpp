#include <iostream>
#include <cstdlib>
#include <time.h>

int main() {

  std::cout << "MAGIC BALL SAYS: \n\n";

  srand(time(NULL));

  int choice = std::rand() % 10;

  switch(choice) {
    case 0:
      std::cout << "No. Not really.\n";
      break;
    case 1:
      std::cout << "As I see it , yes.\n";
      break;
    case 2:
      std::cout << "Don,t count on it.\n";
      break;
    case 3:
      std::cout << "Most likely.\n";
      break;
    case 4:
      std::cout << "My reply is No!.\n";
      break;
    case 5:
      std::cout << "Yes.\n";
      break;
    case 6:
      std::cout << "Without a doubt!\n";
      break;
    case 7:
      std::cout << "It is certain.\n";
      break;
    case 8:
      std::cout << "unfortunately No!\n";
      break;
    case 9:
      std::cout << "Try again\n";
      break;
    default:
      std::cout << "IDK.\n";
      break;

  }

  return 0;

}