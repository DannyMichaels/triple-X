#include <iostream>
#include <ctime>

void PlayGameAtDifficulty(int difficulty) {
  return;
}

int main() 
{
  int difficulty = 2;
  int maxDifficulty = 10;

  while (difficulty <= maxDifficulty) {
    PlayGameAtDifficulty(difficulty);
    std::cin.clear();  // clears the failbit
    std::cin.ignore(); // discards the buffer
    ++difficulty;
  }

  std::cout << "WOW - You're a master hacker!\n";
  return 0; // exit with no error code.
}
