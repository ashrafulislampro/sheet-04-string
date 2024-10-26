#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        int len1 = str1.size(), len2 = str2.size(), len3;
        if (len1 > len2)
        {
            len3 = len1;
        }
        else
        {
            len3 = len2;
        }
        for (int i = 0; i < len3; i++)
        {
            if (i < len1)
            {
                cout << str1[i];
            }
            if (i < len2)
            {
                cout << str2[i];
            }
        }
        cout << endl;
    }

    return 0;
}