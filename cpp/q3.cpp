#include <iostream>
#include <algorithm>
using namespace std;
bool isPalindrome(string str) {
    string filteredStr = "";
    for (char c : str) {
        if (c != ' ') {
            if (c >= 'A' && c <= 'Z') {
                c += 32;
            }
            filteredStr += c;
        }
    }
    int left = 0, right = filteredStr.length() - 1;
    while (left < right) {
        if (filteredStr[left] != filteredStr[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
void characterFrequency(string str) {
    int freq[256] = {0};
    
    for (char c : str) {
        if (c != ' ') {
            if (c >= 'A' && c <= 'Z') {
                c += 32;
            }
            freq[c]++;
        }
    }
    cout << "Character frequencies:" << endl;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << char(i) << ": " << freq[i] << endl;
        }
    }
}
void replaceVowels(string &str) {
    for (char &c : str) {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            c = '*';
        }
    }
}

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    
    characterFrequency(input);
    
    replaceVowels(input);
    cout << "String after replacing vowels: " << input << endl;
    
    return 0;
}