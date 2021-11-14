#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <cstdlib>
using namespace std;

int n; string cmd;
tuple<int, int, int, int> board[20][20]; // �Ƹ�, ����, ����ġ, on/off

// �Ƹ� ����
int d_i[4] = {1, 0, -1, 0}; // �ð���� ȸ��
int d_j[4] = {0, -1, 0, 1}; 

// ����
vector <tuple<int, int, int>> z; // ���� ��ü, ����� �������� (���� i��ǥ, j��ǥ, pos)
int d_z[2] = {1, -1}; // �Ʒ� �� (pos = 0, pos = 1)

void turnLight(int i, int j) {
    //����ġ�� ���� �� ����ġ on
    if (get<2>(board[i][j]) == 1) {
        // i, j ��ġ
        get<3>(board[i][j]) = 1;
        // ��
        if (i - 1 > 0) {
            get<3>(board[i - 1][j]) = 1;
        }
        // ��
        if (i + 1 <= n) {
            get<3>(board[i + 1][j]) = 1;
        }
        // ��
        if (j - 1 > 0) {
            get<3>(board[i][j - 1]) = 1;
        }
        // ��
        if (j + 1 <= n) {
            get<3>(board[i][j + 1]) = 1;
        }
        // �밢��
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

// board : 0 �Ƹ�, 1 ���� ��, 2 ����ġ, 3 on/off

void check(int i, int j) {
    // ���� �ִµ� ���� ���� ���� ���
    if (get<1>(board[i][j]) >= 1 && get<3>(board[i][j]) == 1) {
        cout << "Phew..." << '\n';
        exit(0);
    }
    // ���� �ִµ� ���� ���� ���� ��� 
    else if (get<1>(board[i][j]) >= 1 && get<3>(board[i][j]) == 0) {
        cout << "Aaaaaah!" << '\n';
        exit(0);
    }
}

int main() {
    cin >> n;
    cin >> cmd;
    // board���� i�� ���� 1<=i<=n , j�� ���� 1<=j<=n
    for (int i = 0 ; i < n ; i++) {
        string s;
        cin >> s;
        for (int j = 0 ; j < s.size() ; j++) {
            char val = s[j];
            // ����
            if (val == 'Z') {
                z.push_back({i + 1, j + 1, 0});
                get<1>(board[i + 1][j + 1])++;
            }
            // �Ƹ�
            if (val == 'S') {
                get<2>(board[i + 1][j + 1]) = 1;
            }
        }
    }
    get<0>(board[1][1]) = 1;
    // ���� �Ƹ� ��ġ (1,1) ����
    int a_i = 1;
    int a_j = 1;
    int pos = 0;
    for (int i = 0 ; i < cmd.size() ; i++) {
        // �Ƹ� �̵�
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
        // �̵� �� �� ���� Ű��, ���� �ִ��� Ȯ��
        turnLight(a_i, a_j);
        check(a_i, a_j);

        // (�Ƹ��� �̵� ��) ���� �̵�
        for (int j = 0 ; j < z.size() ; j++) {
            if (get<0>(z[j]) + d_z[get<2>(z[j])] == n + 1) {
                get<2>(z[j]) = (get<2>(z[j]) + 1) % 2;
            } else if (get<0>(z[j]) + d_z[get<2>(z[j])] == 0) {
                get<2>(z[j]) = (get<2>(z[j]) + 1) % 2;
            } else {
                get<1>(board[get<0>(z[j])][get<1>(z[j])])--; // ���� ��ǥ ��ġ ���� �� ����
                get<0>(z[j]) += d_z[get<2>(z[j])]; // ���� i ��ǥ ����
                get<1>(board[get<0>(z[j])][get<1>(z[j])])++; // ���� �� ��ǥ ��ġ ���� �� ����
            }
        }
        // �Ƹ��� ��ġ�� ���� ���� �ִ��� Ȯ��
        check(a_i, a_j);

    }
    cout << "Phew..." << '\n';

    return 0;
}