#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int len = str.size();
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ',')
        {
            cout << " ";
            continue;
        }
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            // cout << "lower: " << str[i] << endl;
            char res = (char)toupper(str[i]);
            cout << res;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            // cout << "Upper: " << str[i] << endl;
            char res = (char)tolower(str[i]);
            cout << res;
        }
    }

    return 0;
}