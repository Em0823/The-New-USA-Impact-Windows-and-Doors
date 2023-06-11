#include <iostream>
#include <string>
using namespace std;

const int MAX_WORDS = 20;

int main() {
    string words[MAX_WORDS];
    string searchWord;
    int count = 0;

    // Read 20 words from the user
    cout << "Enter 20 words:\n";
    for (int i = 0; i < MAX_WORDS; i++) {
        cin >> words[i];
    }

    if (word[i]=="0"){
        break;
       }
    // Read the word to search for
    cout << "Enter a word to search for: ";
    cin >> searchWord;

    count=0;

    // Search for the word and count occurrences
    for (int j = 0; j <= i; j++) {
        if (words[i] == searchWord) {
            count++;
        }
    }

    // Print the number of occurrences
    cout << "The word '" << searchWord << "' occurs " << count << " times in the array." << endl;

return 0;
}