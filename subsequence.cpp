#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, str2 = "hello";
    cin >> str;
    for (int i = 0, j = 0; i < str.size(); i++)
    {
        if (str[i] == str2[j])
        {
            j++;
        }

        if (j == str2.size())
        {

            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}