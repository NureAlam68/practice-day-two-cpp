#include <bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    while (getline(cin, line)) {
        string letters;
        for (char c : line) {
            if (c != ' ') {
                letters += c;
            }
        }
        sort(letters.begin(), letters.end());
        cout << letters << endl;
    }
    return 0;
}