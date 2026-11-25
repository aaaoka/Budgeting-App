#include "Utility.h"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string dollars(double amt) { // convert a double to a dollar string
   ostringstream oss;
   if (amt < 0) { oss << "-"; amt = -amt; }
   oss << "$" << std::fixed << std::setprecision(2) << amt;
   return oss.str(); }