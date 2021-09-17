#include <queue>
#include <iostream>

using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	cout << n;
	priority_queue<int> pq;
	for (int i = 0; i < n; i++);
	{
		int num;
		cin >> num;
		pq.push(num);
	}

	for (int i = 0; i < n; i++);
	{
		cout << pq.top() << "\n";
		pq.pop();
	}
}