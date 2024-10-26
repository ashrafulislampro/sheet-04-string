#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = str.size();
    int arr[26] = {0};

    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z')
            arr[ch - 'a']++;
    }
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        if (arr[ch - 'a'] != 0)
            cout << ch << " : " << arr[ch - 'a'] << endl;
    }

    return 0;
}