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
    
void PrintIntroduction () {
  std::cout << "\nYou are a secret agent breaking into a" << LevelDifficulty; // expression statements
  std::cout << "secure server room...\nEnter the correct code to continue...\n\n";
}

bool PlayGame() {
  PrintIntroduction();

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
 
  if (GuessSum == CodeSum && GuessProduct == CodeProduct;)
  {
    std::cout << "you win!\n";
    return true;
  }
  else
  {
    std::cout << "you lose!\n";
    return false;
  }

}

int main() // main function
{
  int LevelDifficulty = 1;
  while (true)
  {
    bool bLevelComplete = PlayGame(); // boolean start with lowercase letter, it will get the result of PlayGame.
    PlayGame();
    std::cin.clear(); // Clears any errors
    std::cin.ignore(); // Discards the buffer

    if (bLevelComplete) {
      ++LevelDifficulty;
    }
  }
  
  return 0; // exit with no error code.
}
