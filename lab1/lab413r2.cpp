/*********************************************************
* Summary: lab413 for CS1210
*
* Author: Ethan Chitwood
* Created: 16/11/2024
*
********************************************************/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
   string userString;
   bool isValidInput = true;
   int output = 0;

   cin >> userString;

   if (userString.find(',') != string::npos) {
      for (int i = userString.length() - 4; i > 0; i -= 4){
         if (userString.at(i) != ',') {
            isValidInput = false;
            break;
         }
         else {
            userString.erase(i, 1);
         }
      }
   }

   int digitPosition = userString.length() - 1;

   for (char c : userString) {
      if (c >= '0' && c <= '9') {
         output = output + (c - '0') * (pow(10, (digitPosition)));
      }
      else {
         isValidInput = false;
         break;
      }
      digitPosition--;
   }

   if (isValidInput) {
      cout << "yes " << output << endl;
   }
   else {
      cout << "no " << 0 << endl;
   }

   return 0;
}
