#ifndef PLANET_HPP
#define PLANET_HPP
#include <iostream>
#include <stack>
#include <cstdlib>
#include <time.h>
using namespace std;

class Planet
{
private:
  string _name;
  long long _population;
  std::stack<string> _species;
  float _bRate;
  float _dRate;
  Planet *next;
  float random(int max, int min);

public:
  void createPlanet();
  string createName();
  void changeRates();
};

#endif