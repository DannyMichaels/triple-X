#include <iostream> // Preprocessor directive
#include <ctime>
    
void PrintIntroduction (int Difficulty) {
  std::cout << "\nYou are a secret agent breaking into a level " << Difficulty; // expression statements
  std::cout << " secure server room...\nEnter the correct code to continue...\n\n";
}

bool PlayGame(int Difficulty) {
  PrintIntroduction(Difficulty);

  const int CodeA = rand() % Difficulty + Difficulty; // declaration statements
  const int CodeB = rand() % Difficulty + Difficulty; // rand() untuned/uncontrolled returns a random number in the range 0 and a value that is guaranteed to be atleast 32,767. so we use Modulo operator, we also add another number to never get 0's
  const int CodeC = rand() % Difficulty + Difficulty;

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
 
  if (GuessSum == CodeSum && GuessProduct == CodeProduct)
  {
    std::cout << "\n*** Well done agent! You have extracted a file! Keep going! ***\n";
    return true;
  }
  else
  {
    std::cout << "\n*** You entered the wrong code! Careful agent! Try again! ***";
    return false;
  }
}

int main() // main function
{
  srand(time(NULL));

  int LevelDifficulty = 1;
  const int MaxDifficulty = 5;

  while (LevelDifficulty <= MaxDifficulty) // Loop game until all levels are completed
  {
    bool bLevelComplete = PlayGame(LevelDifficulty); // boolean start with lowercase letter, it will get the result of PlayGame.
    std::cin.clear(); // Clears any errors
    std::cin.ignore(); // Discards the buffer

    if (bLevelComplete) {
      ++LevelDifficulty;
    }

  }
  std::cout << "\n*** Great work agent! You got all the files! Now get out of there! ***\n";
  return 0; // exit with no error code.
}
