/*********************************************************
* Summary: Lab 320 for cs 1210
*
* Author: Ethan Chitwood
* Created: 13/11/2024
*
********************************************************/

#include <iostream>
#include <string>

using namespace std;

int main() {

   string origText, expandedText;
   int    choice;

   cout << "Enter text:" << endl;
   getline(cin, origText);
   cout << "You entered: " << origText << endl;

   expandedText = origText;
   
   cout << "Which abbreviation do you want to replace (enter a number)\n";
   cout << "  1. BFF\n  2. IDK\n  3. JK\n  4. TMI\n  5. TTYL\n  6. Quit Program\n  > ";
   cin  >> choice;
   while (choice >= 1 && choice <= 5) {
      string abbr = "";
      string phrase = "";
      int    len = 0; 
      bool   abbrPresent = false;
      
      switch (choice) {
         case 1:
            abbr = "BFF";
            if (origText.find(abbr) != string::npos) {
               len = 3;
               phrase = "best friend forever";
               abbrPresent = true;
            }
            break;
         case 2:
            abbr = "IDK";
            if (origText.find(abbr) != string::npos) {
               len = 3;
               phrase = "I don't know";
               abbrPresent = true;
            }
            break;
         case 3:
            abbr = "JK";
            if (origText.find(abbr) != string::npos) {
               len = 2;
               phrase = "just kidding";
               abbrPresent = true;
            }
            break;
         case 4:
            abbr = "TMI";
            if (origText.find(abbr) != string::npos) {
               len = 3;
               phrase = "too much information";
               abbrPresent = true;
            }
            break;
         case 5:
            abbr = "TTYL";
            if (origText.find(abbr) != string::npos) {
               len = 4;
               phrase = "talk to you later";
               abbrPresent = true;
            }
            break;
         default:
            break;
      }
      
      if (abbrPresent) {
         expandedText.replace(expandedText.find(abbr), len, phrase);
      }
      
      cout << "  > ";
      cin  >> choice;
   }

   cout << endl << "Expanded: " << expandedText << endl;

   return 0;
}
