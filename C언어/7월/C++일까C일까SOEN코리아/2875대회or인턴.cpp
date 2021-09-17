/*
#include <iostream>
#include<queue>
#include<vector>
#include<tuple>

using namespace std;

typedef long long ll;

ll arr[1010][1010];
ll dist[1010][1010]; //dist[i][j] : (1, 1) -> (i, j) �ִ� �Ÿ�

int dy[] = { 0, 0, 1, -1 };
int dx[] = { 1, -1, 0, 0 };

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	//tuple : (�Ÿ�, y, x)
	priority_queue<tuple<ll, int, int>, vector<tuple<ll, int, int> >, greater<tuple<ll, int, int> > >pq;
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	//n�� 1�� ��� �� ���� �����ϴ�.
	if (n == 1) {
		cout << 0 << "\n";
		return 0;
	}
	pq.push(make_tuple(abs(arr[0][0] - arr[0][1]), 0, 1));
	pq.push(make_tuple(abs(arr[0][0] - arr[1][0]), 1, 0));

	memset(dist, 127, sizeof(dist));
	ll INF = dist[0][0];

	dist[0][0] = 0;
	ll ans = 0;
	while (!pq.empty()) {
		ll num;
		int y, x;

		//���� �� �� �ִ� ���� �� ���� ���� ���� �����ϴ�.
		tie(num, y, x) = pq.top();
		pq.pop();

		//���� ��尡 �̹� pq���� ���� ���� �־��ٸ�, �ִܰ�θ� �̹� ���� �����Դϴ�.
		//���� �׳� �����ݴϴ�.
		if (dist[y][x] != INF) continue;
		dist[y][x] = num;
		ans = max(ans, num);
		if (y == n - 1 && x == n - 1) break;
		for (int k = 0; k < 4; k++) {
			int ny = y + dy[k];
			int nx = x + dx[k];
			if (0 > ny || ny >= n || 0 > nx || nx >= n) continue;
			if (dist[ny][nx] != INF) continue;
			pq.push(make_tuple(abs(arr[y][x] - arr[ny][nx]), ny, nx));
		}
	}
	cout << ans << "\n";
	return 0;
}
*/