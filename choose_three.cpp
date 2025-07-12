#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while(T--) {
        int N, S;
        cin >> N >> S;

        int A[N]; 

        for(int i = 0; i < N; i++)
            cin >> A[i];

        int found = 0;

        // Check all combinations of three distinct indices
        for(int i = 0; i < N && !found; i++) {
            for(int j = i + 1; j < N && !found; j++) {
                for(int k = j + 1; k < N; k++) {
                    if(A[i] + A[j] + A[k] == S) {
                        found = 1;
                        break;
                    }
                }
            }
        }

        if(found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}