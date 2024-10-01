/*********************************************************
* Summary: Lab518 for CS1210 
*
* Author: Ethan Chitwood
* Created: 9/30/2024
*
********************************************************/

#include <iostream>

using namespace std;

int main() {
   int sum = 0;
   int oldSum = 0;
   int width;
   bool isMagic = true;
   
   cin >> width;

   bool varifyInput[width * width] = {false};
   int arrSquare[width][width];
      
   for (int i = 0; i < width; i++) {
      for (int j = 0; j < width; j++) {
         cin >> arrSquare[i][j];
         if((arrSquare[i][j] <= width * width) && (arrSquare[i][j] > 0)) {
            varifyInput[arrSquare[i][j] - 1] = true;
         }
      }
   }
   
   for (int i = 0; i < width * width; i++) {
      if(varifyInput[i] == false) {
         cout << "Not all expected numbers are present\n";
         isMagic = false;
      }
   }
   
   for (int i = 0; i < width; i++) {
      for (int j = 0; j < width; j++) {
         sum += arrSquare[i][j];
      }

      if ((sum != oldSum) && (i > 0)) { 
         isMagic = false;
         cout << "Row sums differ\n";
         break;
      }

      oldSum = sum;
      sum = 0;
   }
   
   for (int i = 0; i < width; i++) {
      for (int j = 0; j < width; j++) {
         sum += arrSquare[j][i];
      }

      if (sum != oldSum) {
         isMagic = false;
         cout << "Column sums differ\n";
         break;
      }

      oldSum = sum;
      sum = 0;
   }

   for (int i = 0; i < width; i++) {
      sum += arrSquare[i][i];
   }

   if (sum != oldSum) {
      isMagic = false;
      cout << "Diagonal sums differ\n";
   }

   sum = 0;

   for (int i = 0; i < width; i++) {
      sum += arrSquare[i][(width - 1) - i];
   }

   if (sum != oldSum) {
      isMagic = false;
      cout << "Diagonal sums differ\n";
   }
   
   if (isMagic) { 
     cout << "The given matrix is a magic square\n";
   }
   return 0;
}
