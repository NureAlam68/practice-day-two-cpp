#include <bits/stdc++.h>
using namespace std;

int* sort_it(int n)
{
    int* a = new int[n];  // dynamic array allocation

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a+n, greater<int>());
    return a; // return pointer to array
}

int main()
{
    int N;
    cin >> N;

    int* sorted_array = sort_it(N);

    for(int i = 0; i < N; i++)
    {
        cout << sorted_array[i] << " ";
    }
    cout << endl;

    delete[] sorted_array;
    return 0;
}