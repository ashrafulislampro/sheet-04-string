#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int len = str.size();
    int freq[26] = {0};
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'e')
        {
            freq[str[i] - 'a']++;
        }
        else if (str[i] == 'g')
        {
            freq[str[i] - 'a']++;
        }
        else if (str[i] == 'y')
        {
            freq[str[i] - 'a']++;
        }
        else if (str[i] == 'p')
        {
            freq[str[i] - 'a']++;
        }
        else if (str[i] == 't')
        {
            freq[str[i] - 'a']++;
        }
    }
    int len1 = freq['e' - 'a'];
    int len2 = freq['g' - 'a'];
    int len3 = freq['y' - 'a'];
    int len4 = freq['p' - 'a'];
    int len5 = freq['t' - 'a'];

    int count = min(len1, min(len2, min(len3, min(len4, len5))));

    cout << count << endl;

    return 0;
}