C++ puzzle game
Created with Epic Games guidance.

# Why int main() ?

- Every C++ program requires int main()
- It is the entry point of a c++ program
- Without it, your program will not build!

# Compile and run program

- steps for mac:

```
  triple-X git:(master): g++ tripleX.cpp -o tripleX
  triple-X git:(master): ✗ ./tripleX
```

- steps for windows:

```
  triple-X git:(master): cl tripleX.cpp
  triple-X git:(master): ✗ tripleX
```

# MSVC Compilation Warnings [Windows Only]

You may see unnecessary warnings when compiling your program on Windows. If you would like to remove these warnings, follow the steps below.

Instead of compiling with:
cl triplex.cpp

Try adding /EHsc to the end of the command:
cl main.cpp /EHsc

For further reading: https://docs.microsoft.com/en-us/cpp/build/reference/eh-exception-handling-model?view=vs-2019

# Getting User Input

- cout = Character Output
  Insertion Operator = <<

- cin = character Input
  Extraction Operator = >>

- Characters like 'x' get converted to 0 with integers.

- Chars like 'x' will halt cin from working until reset.

# Seeing rand()

- We need to initialize rand() with a different seed
  This will produce random results
- The best way to do this is based on your computer's time
- #include <ctime>
- and the start of main add this line:

```
srand(time(NULL));
// Creates new random sequence based on the time of day.
```
