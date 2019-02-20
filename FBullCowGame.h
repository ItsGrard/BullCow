#pragma once
#include <string>
class FBullCowGame {

public:

  void ResetGame();
  int GetMaxTries();
  int GetHighScore();
  int GetCurrentTry();
  int SetCurrentTry(int settry);
  bool isWon();
  bool checkGuessValidity(std::string guess);
private:
  int myTries = 1;
  int maxTries = 5;
  int HighScore;
};
