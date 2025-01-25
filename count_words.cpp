#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    string str;
    getline(cin, str);
    stringstream stm(str);
    string word;

    while (stm >> word)
    {

        bool hasLetter = false;
        for (char ch : word)
        {
            if (isalpha(ch))
            {
                hasLetter = true;
                break;
            }
        }
        if (hasLetter)
            count++;
    }
    cout << count;
    return 0;
}
