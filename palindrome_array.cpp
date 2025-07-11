#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    long long A[N];

    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int i = 0;
    int j = N - 1;
    
    int is_palindrome = 1;

    while(i < j)
    {
        if(A[i] != A[j])
        {
            is_palindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if(is_palindrome)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}