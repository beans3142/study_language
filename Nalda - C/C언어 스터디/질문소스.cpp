#include<iostream>
#include<map>

using namespace std;

int arr[10];
int unconver[8] = { 4,16,37,58,89,145,42,20 };
map<int, int> v;

int sol(int x) {
    int now = x;
    while (now != 1) {
        int nxt = 0;
        if (v[now]) {
            return 0;
        }
        while (now) {
            nxt += (now % 10) * (now % 10);
            now /= 10;
        }
        now = nxt;
    }
    return 1;
}

int main() {

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        v[unconver[i]]=1;
    }

    for (int i = 0; i < 10; i++) {
        cnt += sol(arr[i]);
    }
    cout << cnt << '\n';
}