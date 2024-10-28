#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    stringstream stm(str);
    vector<string> str2;

    string word;
    while (stm >> word)
    {

        reverse(word.begin(), word.end());
        str2.push_back(word);
    }
    int len = str2.size();
    for (int i = 0; i < len; i++)
    {
        cout << str2[i];
        if (i < len)
        {
            cout << " ";
        }
    }
    return 0;
}