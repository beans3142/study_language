#include <iostream>
#include <algorithm>
using namespace std;

int d[100001]; // d[n] = n번째까지 시식한 최대 음식의 개수
int arr[100001];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    d[0] = 0;
    d[1] = arr[1];
    d[2] = max(arr[1] + arr[2] / 2, arr[2]);
    for (int i = 3; i <= n; i++) {
        d[i] = max(d[i - 2] + arr[i], d[i - 3] + arr[i - 1] + arr[i] / 2);
    }
    int ans = -1;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, d[i]);
    }
    cout << ans << '\n';

    return 0;

}