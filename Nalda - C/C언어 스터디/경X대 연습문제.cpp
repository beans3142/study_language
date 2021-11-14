#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

float arr[100001] = { 0, };
int n;
float ans, sum = 0.0;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
    sort(arr, arr + n);
    int d = n / 5;

    for (int i = d; i < n - d; i++) {
        sum = sum + arr[i];
    }

    ans = (float)ceil(sum / (3 * n / 5) * 100) / 100;

    printf("%.2f", ans);
}