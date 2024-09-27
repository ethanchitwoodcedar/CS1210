/*********************************************************
* Summary: CS1210 Lab 2 part 1
*
* Author: Ethan Chitwood
* Created: 9/11
*
********************************************************/

#include <iostream>

using namespace std;

int main() {

   int red;
   int green;
   int blue;
   int smallestValue;

   cin >> red;
   cin >> green;
   cin >> blue;
   
   if((red < green) && (red < blue)) {
      smallestValue = red;
   }
   else if(blue < green) {
      smallestValue = blue;
   }
   else {
      smallestValue = green;
   }


   red = red - smallestValue;
   green = green - smallestValue;
   blue = blue - smallestValue;
   
   cout << red << ' ' << green << ' ' << blue << endl;

   return 0;
}
