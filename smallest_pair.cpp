#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int N;
        cin >> N;
        int A[N];

        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int ans = A[0] + A[1] + (1 - 0);

        for(int i = 0; i < N; i++)
        {
            for(int j = i + 1; j < N; j++)
            {
                int current = A[i] + A[j] + (j - i);
                ans = min(ans, current);
            }
        }
        cout << ans << endl;
    }
    return 0;
}