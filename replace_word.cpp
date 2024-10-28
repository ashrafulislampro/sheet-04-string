#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, word = "EGYPT";
    getline(cin, str);
    while (str.find(word) != string::npos)
    {
        str.replace(str.find(word), 5, " ");
    }
    cout << str << endl;
    return 0;
}