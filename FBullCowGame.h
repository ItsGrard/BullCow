#pragma once
#include <string>
class FBullCowGame {
public:
  void ResetGame();
  int GetMaxTries();
  int GetHighScore();
  bool isWon();
  bool checkGuessValidity(std::string guess);
private:
  int myTries;
  int maxTries;
  int HighScore;
};
