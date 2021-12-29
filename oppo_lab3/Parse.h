#pragma once

using namespace std;

void Parsing(Container &container);
bool CorrectDataAir(string buff);
bool CorrectDataTrain(string buff);
bool CorrectDataCar(string buff);
void ParseAir(string buf, Air& Airplane);
void ParseTrain(string buf, Train& TrainBuff);
void ParseCar(string buf, Car& CarBuff);