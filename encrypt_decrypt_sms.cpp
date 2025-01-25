#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;
    cin.ignore();
    string str, Key, Original, result;
    cin >> str;
    int len = str.size();

    Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    if (Q == 1)
    {
        result = "";
        for (int i = 0; i < len; i++)
        {
            int ind = Original.find(str[i]);
            char ch = Key[ind];
            result += ch;
        }
    }
    else
    {
        result = "";
        for (int i = 0; i < len; i++)
        {
            int ind = Key.find(str[i]);
            char ch = Original[ind];
            result += ch;
        }
    }
    cout << result << endl;
    return 0;
}