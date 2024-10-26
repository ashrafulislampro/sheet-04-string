#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    string str;
    cin >> str;

    while (Q--)
    {
        string str2;
        cin >> str2;

        if (str2 == "front")
        {
            cout << str.front() << endl;
        }
        else if (str2 == "pop_back")
        {
            str.pop_back();
        }

        else if (str2 == "back")
        {
            cout << str.back() << endl;
        }
        else if (str2 == "sort")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            sort(str.begin() + l - 1, str.begin() + r);
        }
        else if (str2 == "reverse")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            reverse(str.begin() + l - 1, str.begin() + r);
        }

        else if (str2 == "push_back")
        {
            char ch;
            cin >> ch;
            str.push_back(ch);
        }
        else if (str2 == "print")
        {
            int ind;
            cin >> ind;
            cout << str[ind - 1] << endl;
        }
        else if (str2 == "substr")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            cout << str.substr(l - 1, r-l+1) << endl;
        }
    }
    return 0;
}