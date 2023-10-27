#include <iostream>
using namespace std;

int main() {
    char input;
    // Ask for user input
    cout << "Enter a character: ";
    cin >> input;

    if ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')) {
      char lowercaseChar = tolower(input); // makes the char input into lowercase
        if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u') {
            cout << input << " is a vowel";
        } else {
            cout << input << " is a consonant";
        }
    } else if (input >= '0' && input <= '9') {
      cout << input << " is a digit";
    } else if (input == '.' || input == ',' || input == ';' || input == '!' || input == '?' || input == '[' || input == ']' ||input == ':' || input == '(' || input == ')') {
        cout << input << " is a punctuation";
    } else {
      cout << input << " is unrecognised";
    }
}
