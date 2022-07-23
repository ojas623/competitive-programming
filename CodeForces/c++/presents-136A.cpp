#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; // n = number of invited people (1 <= n <= 100), 
    cin >> n;

    int arr[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> k;
        arr[k] = i;
    }

    for (int i=1; i<=n; i++) {
        cout << arr[i] << endl;
    }
    return 0;

}