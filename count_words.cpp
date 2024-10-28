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

        while (!word.empty() && (word.back() == '!' || word.back() == '?' || word.back() == '.' || word.back() == ','))
        {
            word.pop_back();
        }
        bool isAlpha = true;
        for (char c : word)
        {
            if (!isalpha(c))
            {
                isAlpha = false;
                break;
            }
        }

        if (isAlpha && !word.empty())
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}