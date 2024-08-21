#include <iostream>
using namespace std;

int main(){

    char character;

    cout<< "Enter a character: ";
    cin >> character;

    if (isalpha(character)){
        character = tolower(character);
        switch (character) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            cout << character << " is a vowel.";
            break;
        default:
            cout << character << " is a consonant.";
            break;

    }
    }

    else{

        cout<< character << " is not an alphabetic character.";

    }

    return 0;
}
