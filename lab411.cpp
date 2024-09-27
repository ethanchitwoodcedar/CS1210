/*********************************************************
* Summary: lab411 for CS1210
*
* Author: Ethan Chitwood
* Created: 15/11/2024
*
********************************************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
   unsigned int charCounter = 0;
   char inputChar;
   string inputString;

   cin >> inputChar;
   getline(cin, inputString);

   for (int i = 0; i < inputString.length(); ++i) {
      if (inputChar == inputString.at(i)) {
         charCounter++;
      }
   }

   if (charCounter != 1) {
      cout << charCounter << " " << inputChar << "'s\n";
   }
   else {
      cout << charCounter << " " << inputChar << "\n";
   }

   return 0;
}
