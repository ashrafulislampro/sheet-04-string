#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int count = 0, len = str.size();
        if (len > 10)
        {
            char first_ch, last_ch;
            for (int i = 0; i < len; i++)
            {
                if (i == 0)
                {
                    first_ch = str[i];
                    continue;
                }
                if (i == len - 1)
                {
                    last_ch = str[i];
                    continue;
                }
                count++;
            }
            cout << first_ch << count << last_ch << endl;
        }
        else
        {
            cout << str << endl;
        }
    }

    return 0;
}