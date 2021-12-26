#include <map>      
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    string text;
    map <char, int> mp;

    getline(cin, text);
    transform(text.begin(), text.end(), text.begin(), tolower);

    for (int i = 0; i < text.length(); i++) {
        mp[text[i]]++;
    }

    for (int i = 0; i < text.length(); i++) {
        if (mp[text[i]] > 1)
            text[i] = ')';
        else
            text[i] = '(';

        cout << text[i];
    }

    return 0;
}