#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

bool isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

string convertToPigLatin(const string& word) {
    if (word.empty()) return word;
    
    int start = 0;
    while (start < word.length() && !isLetter(word[start])) {
        start++;
    }
    
    if (start == word.length()) return word;
    
    int end = start;
    while (end < word.length() && isLetter(word[end])) {
        end++;
    }
    
    string before = word.substr(0, start);
    string actualWord = word.substr(start, end - start);
    string after = word.substr(end);
    
    string pigLatinWord;
    if (isVowel(actualWord[0])) {
        pigLatinWord = actualWord + "ay";
    } else {
        pigLatinWord = actualWord.substr(1) + actualWord[0] + "ay";
    }
    
    return before + pigLatinWord + after;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string line;
    
    while (getline(cin, line)) {
        string result = "";
        istringstream iss(line);
        string word;
        bool first = true;
        
        while (iss >> word) {
            if (!first) result += " ";
            result += convertToPigLatin(word);
            first = false;
        }
        
        cout << result << endl;
    }
    
    return 0;
}