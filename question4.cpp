#include <iostream>
#include <string>
using namespace std;

void concatenateStrings() {
    string s1, s2;
    cout << "Enter first string: ";
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);
    cout << "Concatenated string: " << s1 + s2 << endl;
}

void reverseString() {
    string s;
    cout << "Enter a string to reverse: ";
    getline(cin, s);
    int L = (int)s.length();
    for (int i = 0; i < L / 2; i++) {
        char tmp = s[i];
        s[i] = s[L - 1 - i];
        s[L - 1 - i] = tmp;
    }
    cout << "Reversed string: " << s << endl;
}

void deleteVowels() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    string result = "";
    for (int i = 0; i < (int)s.length(); i++) {
        char c = s[i];
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
              c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            result += c;
        }
    }
    cout << "String without vowels: " << result << endl;
}

void sortStrings() {
    int n;
    cout << "How many strings? ";
    cin >> n;
    cin.ignore(); // clear newline
    string arr[100];
    for (int i = 0; i < n; i++) {
        cout << "Enter string " << i + 1 << ": ";
        getline(cin, arr[i]);
    }
    // Bubble sort strings (alphabetical)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                string tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    cout << "Sorted strings:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << '\n';
}

void upperToLower() {
    char ch;
    cout << "Enter an uppercase character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') {
        char lower = ch + 32;
        cout << "Lowercase: " << lower << endl;
    } else {
        cout << "That is not an uppercase character!" << endl;
    }
}

int main() {
    int choice;
    cout << "Choose an option:\n";
    cout << "1. Concatenate Strings\n";
    cout << "2. Reverse a String\n";
    cout << "3. Delete Vowels from String\n";
    cout << "4. Sort Strings Alphabetically\n";
    cout << "5. Convert Uppercase to Lowercase\n";
    cout << "Enter choice: ";
    cin >> choice;
    cin.ignore();

    switch (choice) {
        case 1: concatenateStrings(); break;
        case 2: reverseString(); break;
        case 3: deleteVowels(); break;
        case 4: sortStrings(); break;
        case 5: upperToLower(); break;
        default: cout << "Invalid choice\n";
    }
    return 0;
}
