// check vowel or consonant

#include <iostream>
using namespace std;

int main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;

    cout << "Enter an alphaber: ";
    cin >> c;

    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    isUppercaseVowel = (c == 'A', c == 'E', c == 'I', c = 'O', c == 'U');
    if (isLowercaseVowel || isUppercaseVowel)
        cout << c << " is a vowel. ";
    else
        cout << c << " is a consonant.";
    return 0;
}