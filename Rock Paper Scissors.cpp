#include <iostream>
#include <stdlib.h>
#include <time.h>

/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
*/
int main() {

  srand (time(NULL));
  
  int computer = rand() % 3 + 1;

  int user = 0;
  
  std::cout << "====================\n";
  std::cout << "Rock Paper Scissors!\n";
  std::cout << "====================\n"; 
  
  std::cout << "1) Rock ?\n";
  std::cout << "2) Paper ?\n";
  std::cout << "3) Scissors ?\n";

  std::cout << "Shoot! \n";

  std::cin >> user;
  
  /* 
  rock > scissors
  scissors > paper
  paper > rock
  */
  
  if (user == 1)
    std::cout << "you choose: Rock ?\n";
  else if (user == 2)
    std::cout << "you choose: Paper ?\n";
  else
    std::cout << "you choose: Scissors ?\n";

  if (computer == 1)
    std::cout << "cpu choose: Rock ?\n";
  else if (computer == 2)
    std::cout << "cpu choose: Paper ?\n";
  else
    std::cout << "cpu choose: Scissors ??\n";


  if (user == computer) {

    std::cout << "it's a tie!\n";

  }

  // user rock

  else if (user == 1) {

    if (computer == 2) {

      std::cout << "you lost! booooo!\n";

    }
    if (computer == 3) {

      std::cout << "you won! woohoo!\n";

    }

  }

  // user paper

  else if (user == 2) {

    if (computer == 1) {

      std::cout << "you won! woohoo!\n";

    }
    if (computer == 3) {

      std::cout << "you lost! boo!\n";

    }

  }

  // user scissors

  else if (user == 3) {

    if (computer == 1) {

      std::cout << "you won! woohoo!\n";

    }
    if (computer == 2) {

      std::cout << "you lost! booooo!\n";

    }

  }
  return 0;
}