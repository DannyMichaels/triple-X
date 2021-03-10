#include <iostream> // Preprocessor directive
#include <ctime>

void PlayGameAtDifficulty(int difficulty) {
  // int difficulty = 2;
  // int maxDifficulty = 10;

  // while (difficulty <= maxDifficulty) {
  //   PlayGameAtDifficulty(difficulty);
  //   std::cin.clear();  // clears the failbit
  //   std::cin.ignore(); // discards the buffer
  //   ++difficulty;
  // }
  // std::cout << "WOW - You're a master hacker!\n";
  return;
}

void PlayGame() {
  std::cout << "You are a secret agent breaking into a secure server room..."; // expression statements
  std::cout << std::endl; 

  std::cout << "Enter the correct code to continue...";

  const int CodeA = 4; // declaration statements
  const int CodeB = 3;
  const int CodeC = 2;

              // PascalCase... 
  const int CodeSum = CodeA + CodeB + CodeC;
  const int CodeProduct = CodeA * CodeB * CodeC;


  std::cout << std::endl; // expression statements

  std::cout << "+ There are 3 numbers in the code"; // expression statements
  std::cout << "\n+ The codes add-up to: " << CodeSum;
  std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

  int GuessA, GuessB, GuessC;
  std::cin >> GuessA >> GuessB >> GuessC;

  const int GuessSum = GuessA + GuessB + GuessC;
  const int GuessProduct = GuessA * GuessB * GuessC;

  
  const bool GuessedCorrectly = GuessSum == CodeSum && GuessProduct == CodeProduct;
 
  if (GuessedCorrectly)
  {
    std::cout << "you win!";
  }
  else
  {
    std::cout << "you lose!\n";
  }



}

int main() // main function
{

  PlayGame();
  return 0; // exit with no error code.
}
