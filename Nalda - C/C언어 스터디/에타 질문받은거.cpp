#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <cstdlib>
using namespace std;

int n; string cmd;
tuple<int, int, int, int> board[20][20]; // 아리, 좀비, 스위치, on/off

// 아리 방향
int d_i[4] = {1, 0, -1, 0}; // 시계방향 회전
int d_j[4] = {0, -1, 0, 1}; 

// 좀비
vector <tuple<int, int, int>> z; // 좀비 객체, 좀비는 여러마리 (각각 i좌표, j좌표, pos)
int d_z[2] = {1, -1}; // 아래 위 (pos = 0, pos = 1)

void turnLight(int i, int j) {
    //스위치가 있을 때 스위치 on
    if (get<2>(board[i][j]) == 1) {
        // i, j 위치
        get<3>(board[i][j]) = 1;
        // 상
        if (i - 1 > 0) {
            get<3>(board[i - 1][j]) = 1;
        }
        // 하
        if (i + 1 <= n) {
            get<3>(board[i + 1][j]) = 1;
        }
        // 좌
        if (j - 1 > 0) {
            get<3>(board[i][j - 1]) = 1;
        }
        // 우
        if (j + 1 <= n) {
            get<3>(board[i][j + 1]) = 1;
        }
        // 대각선
        if (i - 1 > 0 && j + 1 <= n)  {
            get<3>(board[i - 1][j + 1]) = 1;
        }
        if (i + 1 <= n && j + 1 <= n) {
            get<3>(board[i + 1][j + 1])= 1;
        }
        if (i + 1 <= n && j - 1 > 0) {
            get<3>(board[i + 1][j - 1]) = 1;
        }
        if (i - 1 > 0 && j - 1 > 0) {
            get<3>(board[i - 1][j - 1])= 1;
        }
    }
}

// board : 0 아리, 1 좀비 수, 2 스위치, 3 on/off

void check(int i, int j) {
    // 좀비가 있는데 불이 켜져 있을 경우
    if (get<1>(board[i][j]) >= 1 && get<3>(board[i][j]) == 1) {
        cout << "Phew..." << '\n';
        exit(0);
    }
    // 좀비가 있는데 불이 꺼져 있을 경우 
    else if (get<1>(board[i][j]) >= 1 && get<3>(board[i][j]) == 0) {
        cout << "Aaaaaah!" << '\n';
        exit(0);
    }
}

int main() {
    cin >> n;
    cin >> cmd;
    // board에서 i의 범위 1<=i<=n , j의 범위 1<=j<=n
    for (int i = 0 ; i < n ; i++) {
        string s;
        cin >> s;
        for (int j = 0 ; j < s.size() ; j++) {
            char val = s[j];
            // 좀비
            if (val == 'Z') {
                z.push_back({i + 1, j + 1, 0});
                get<1>(board[i + 1][j + 1])++;
            }
            // 아리
            if (val == 'S') {
                get<2>(board[i + 1][j + 1]) = 1;
            }
        }
    }
    get<0>(board[1][1]) = 1;
    // 현재 아리 위치 (1,1) 시작
    int a_i = 1;
    int a_j = 1;
    int pos = 0;
    for (int i = 0 ; i < cmd.size() ; i++) {
        // 아리 이동
        if (cmd[i] == 'R') {
            pos = (pos + 1) % 4;
        } else if (cmd[i] == 'L') {
            pos = (4 + pos - 1) % 4;
        } else if (cmd[i] == 'F') {
            if (1 <= a_i + d_i[pos] && a_i + d_i[pos] <= n && 1 <= a_j + d_j[pos] && a_j + d_j[pos] <= n) {
                get<0>(board[a_i][a_j]) = 0;
                get<0>(board[a_i + d_i[pos]][a_j + d_j[pos]]) = 1;
                a_i += d_i[pos];
                a_j += d_j[pos];
            }
        }
        cout << a_i << " " << a_j << '\n';
        // 이동 후 불 부터 키고, 좀비가 있는지 확인
        turnLight(a_i, a_j);
        check(a_i, a_j);

        // (아리가 이동 후) 좀비 이동
        for (int j = 0 ; j < z.size() ; j++) {
            if (get<0>(z[j]) + d_z[get<2>(z[j])] == n + 1) {
                get<2>(z[j]) = (get<2>(z[j]) + 1) % 2;
            } else if (get<0>(z[j]) + d_z[get<2>(z[j])] == 0) {
                get<2>(z[j]) = (get<2>(z[j]) + 1) % 2;
            } else {
                get<1>(board[get<0>(z[j])][get<1>(z[j])])--; // 이전 좌표 위치 좀비 수 감소
                get<0>(z[j]) += d_z[get<2>(z[j])]; // 현재 i 좌표 변경
                get<1>(board[get<0>(z[j])][get<1>(z[j])])++; // 변경 된 좌표 위치 좀비 수 증가
            }
        }
        // 아리가 위치한 곳에 좀비가 있는지 확인
        check(a_i, a_j);

    }
    cout << "Phew..." << '\n';

    return 0;
}