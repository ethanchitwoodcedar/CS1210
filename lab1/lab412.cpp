/*********************************************************
* Summary: lab412 for CS1210
*
* Author: Ethan Chitwood
* Created: 16/11/2024
*
********************************************************/

#include <iostream>

using namespace std;

int main() {
   int input;
   string output;

   cin >> input;

   while (input > 0 ) {
      output.insert(0, to_string(input % 2));
      input = input / 2;
   }

   cout << output << endl;

   return 0;
}
