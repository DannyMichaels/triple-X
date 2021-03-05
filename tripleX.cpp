#include <iostream>
#include <ctime>

void PlayGameAtDifficulty(int difficulty) {
  return;
}

int main() 
{
  // int difficulty = 2;
  // int maxDifficulty = 10;

  // while (difficulty <= maxDifficulty) {
  //   PlayGameAtDifficulty(difficulty);
  //   std::cin.clear();  // clears the failbit
  //   std::cin.ignore(); // discards the buffer
  //   ++difficulty;
  // }
  std::cout << "You are a secret agent breaking into a secure server room...";
  std::cout << std::endl;
  std::cout << "Enter the correct code to continue...";

  int a = 4;
  int b = 3;
  int c = 2;

  std::cout << std::endl;
  std::cout << a + b + c;


  // std::cout << "WOW - You're a master hacker!\n";
  return 0; // exit with no error code.
}
