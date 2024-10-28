#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, arr[5] = {"username", "pwd", "profile", "role", "key"};

    getline(cin, str);

    for (int i = 0; i < 5; i++)
    {
        string pros = arr[i], result = "";
        int pos = str.find(pros), arr_ele_s = pros.size();
        int ind = pos + arr_ele_s + 1;

        while (1)
        {
            char ch = str[ind];
            if (ch == '&' || ch == '\0')
                break;
            result += ch;
            ind++;
        }
        cout << pros << ": " << result << endl;
    }

        return 0;
}