#include <stdio.h>

int arr[1000];
int func2(int num);
int func1(int N);
int main(void) {
    int i, j, a = 1, N;
    int ans[1000] = { 0,1 };

    scanf("%d", &N);
    for (i = 2; i <= N; i++) {
        ans[i] = ans[i - 1] + ans[i - 2];
    }
    int how_many = ans[N];
    arr[0] = how_many;
    printf("%d", ans[N]);
    func1(N);
    for (j = 1; j < how_many + 1; j++) {
        func2(arr[j]);
    }
    return 0;
}
int func1(int N) {
    int tmp = 0, i = 1;
    while (1) {
        if (N * N <= tmp) {
            break;
        }
        if (i % 2 == 0) {
            tmp = i << 1;
            if ((N - 1) * (N - 1) <= tmp && N * N > tmp) {
                arr[i] = (tmp << 1) + 1;
            }
            i++;
        }
        else {
            tmp = i << 1;
            if ((N - 1) * (N - 1) <= tmp && N * N > tmp) {
                arr[i] = tmp;
                i << 1;
                arr[i] = tmp + 1;
            }
        }
        i++;
    }
    return 0;
}
int func2(int fN) {
    int num[16];
    int i = 0;
    while (fN) {
        int a;
        a = fN & 1;
        num[i++] = a;
        fN >>= 1;
    }
    int j;
    for (j = i - 1; j > -1; j--) {
        printf("%d", num[j]);
    }
    return 0;
}