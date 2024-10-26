#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;    
    int arr[26] = {0};
    for (int i = 0; i < N; i++)
    {
        char ch;
        cin>>ch;
        arr[ch - 'a']++;
    }

    
    for (int i = 0; i < 26; i++)
    {
       char ch = i + 'a';
       while(arr[i] > 0){
        cout<<ch;
        arr[i]--;
       }
    }
    
    return 0;
}