/*
#include <iostream>
#include<queue>
#include<vector>
#include<tuple>

using namespace std;

typedef long long ll;

ll arr[1010][1010];
ll dist[1010][1010]; //dist[i][j] : (1, 1) -> (i, j) 최단 거리

int dy[] = { 0, 0, 1, -1 };
int dx[] = { 1, -1, 0, 0 };

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	//tuple : (거리, y, x)
	priority_queue<tuple<ll, int, int>, vector<tuple<ll, int, int> >, greater<tuple<ll, int, int> > >pq;
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	//n이 1일 경우 갈 곳이 없습니다.
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

		//현재 갈 수 있는 노드들 중 가장 낮은 값을 꺼냅니다.
		tie(num, y, x) = pq.top();
		pq.pop();

		//만약 노드가 이미 pq에서 꺼낸 적이 있었다면, 최단경로를 이미 구한 상태입니다.
		//따라서 그냥 버려줍니다.
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