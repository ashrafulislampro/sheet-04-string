#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, temp;
    cin >> str;

    temp = "";
    for (int i = str.size() - 1; i >= 0; i--)
    {
        temp += str[i];
    }
    if (temp == str)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}