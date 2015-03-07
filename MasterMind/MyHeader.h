#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//arrays for easy and medium
int arr [4];
int userArray [4];

//only for medium & hard
extern int mediumModeNumber;
extern int HardModeNumber;

//menu method
int showMenu();

//difficulty
void easyDifficulty();
void mediumDifficulty();
void hardDifficulty();

//array gen for difiiculty
void numGen();
void numGenMedium();
void numGenHard();