/*
Write a program that prompts the user to enter the name of a number.
If the number is a key in the provided map, the program prints out the integer value for that number.
*/

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  const map<string, int> word_to_number = {{"one", 1},{"two", 2},{"three", 3},{"four", 4},{"five", 5}};

cout<<"enter number "<<endl;
string input;
cin >> input;

auto it = word_to_number.find(input);
if (it != word_to_number.end()) {
  cout << it->second << endl;
} else {
  cout << "not found" << endl;
}

}


// why doe this not work on mac terminal?
