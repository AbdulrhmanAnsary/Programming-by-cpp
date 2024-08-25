#include <iostream>

using namespace std;

bool isPalindromeString(const string &word)
{
    int n = word.length();

    for (int i = 0; i < n / 2; i++)
    {
        if (word[i] != word[n - i - 1])
            return false;
    }

    return true;
}

int main(int argc, char *argv[])
{
    cout << isPalindromeString("level");

    return 0;
}