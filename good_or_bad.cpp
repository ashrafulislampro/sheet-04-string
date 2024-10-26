#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str, str1 = "010", str2 = "101";
        cin >> str;
        bool isTrue = false;
        for (int i = 0; i < str.size() - 2; i++)
        {
            for (int j = i, k = 0, p = 0, q = 0; j < 3 + i; j++, k++)
            {

                if (str[j] == str1[k])
                {
                    p++;
                }
                else if (str[j] == str2[k])
                {
                    q++;
                }
                if ((k + 1 == 3 && q == 3) || (k + 1 == 3 && p == 3))
                {
                    isTrue = true;
                }
            }
            if (isTrue)
                break;
        }
        cout << (isTrue ? "Good" : "Bad") << endl;
    }
    return 0;
}
