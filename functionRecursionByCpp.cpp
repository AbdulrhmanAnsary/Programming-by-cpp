#include <iostream>

using namespace std;

string cleanWord(string word)
{
    if (word.size() == 1)
    {
        return word;
    }

    if (word[0] == word[1])
    {
        return cleanWord(word.substr(1));
    }

    return word[0] + cleanWord(word.substr(1));
}

int main()
{
    cout << cleanWord("wwwwooorrrlldddd") << endl;

    return 0;
}