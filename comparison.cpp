#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, result, sub_str, sub_str2, temp;
    getline(cin, str);
    int len = str.size();
    result = str;
    for (int i = 0; i < len; i++)
    {
        sub_str = "";
        sub_str2 = "";
        for (int j = 0; j <= i; j++)
        {
            if (j == len)
                break;
            sub_str += str[j];
        }
        for (int k = i + 1; k < len; k++)
        {
            sub_str2 += str[k];
        }
        sort(sub_str.begin(), sub_str.end());
        sort(sub_str2.begin(), sub_str2.end());
        temp = sub_str + sub_str2;
        if (temp < result)
        {
            result = temp;
        }
    }
    cout << result << endl;
    return 0;
}