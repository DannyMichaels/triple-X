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

  const int codeA = 4; // declaration statements
  const int codeB = 3;
  const int codeC = 2;

            // camelCase like javascript <3
  const int codeSum = codeA + codeB + codeC;
  const int codeProduct = codeA * codeB * codeC;

  std::cout << std::endl;  // expression statements

  std::cout << "+ There are 3 numbers in the code" << std::endl; // expression statements
  std::cout << "+ The codes add-up to: " << codeSum << std::endl;
  std::cout << "+ The codes multiply to give: " << codeProduct << std::endl;

  // std::cout << "WOW - You're a master hacker!\n";
  return 0; // exit with no error code.
}
