#include <iostream> // Preprocessor directive
#include <ctime>

void PlayGameAtDifficulty(int difficulty) {
  return;
}

int main() // main function
{
  // int difficulty = 2;
  // int maxDifficulty = 10;

  // while (difficulty <= maxDifficulty) {
  //   PlayGameAtDifficulty(difficulty);
  //   std::cin.clear();  // clears the failbit
  //   std::cin.ignore(); // discards the buffer
  //   ++difficulty;
  // }
  std::cout << "You are a secret agent breaking into a secure server room..."; // expression statements
  std::cout << std::endl; 

  std::cout << "Enter the correct code to continue...";

  const int CodeA = 4; // declaration statements
  const int CodeB = 3;
  const int CodeC = 2;

              // PascalCase... 
  const int CodeSum = CodeA + CodeB + CodeC;
  const int CodeProduct = CodeA * CodeB * CodeC;

  std::cout << std::endl;  // expression statements

  std::cout << "+ There are 3 numbers in the code" << std::endl; // expression statements
  std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
  std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

  int GuessA, GuessB, GuessC;
  std::cin >> GuessA;
  std::cin >> GuessB;
  std::cin >> GuessC;

  std::cout << "You entered: " << GuessA << GuessB << GuessC;
  // std::cout << "WOW - You're a master hacker!\n";
  return 0; // exit with no error code.
}
