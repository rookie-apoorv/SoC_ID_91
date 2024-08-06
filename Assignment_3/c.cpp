#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> usedChars;
    int maxLength = 0, start = 0;

    for (int i = 0; i < s.size(); i++) {
        if (usedChars.find(s[i]) != usedChars.end() && usedChars[s[i]] >= start) {
            start = usedChars[s[i]] + 1;
        }
        usedChars[s[i]] = i;
        maxLength = max(maxLength, i - start + 1);
    }

    return maxLength;
}

int main() {
    string newsDescription;
    getline(cin, newsDescription);  

    int result = lengthOfLongestSubstring(newsDescription);
    cout << "The length of the longest substring with unique characters is: " << result << endl;

    return 0;
}
