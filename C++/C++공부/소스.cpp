/*
#include <iostream>
#include <map>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	map<string, priority_queue<long long>> shop;
	long long total=0;
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int n,cnt;
		string name;
		cin >> n >> name >> cnt;
		if (n == 1)
		{
			for (int j = 0; j < cnt; j++)
			{
				int price;
				cin >> price;
				shop[name].push(price);
			}
		}
		else
		{
			while (empty(shop[name]) != 1 && cnt--)
			{
				total += shop[name].top();
				shop[name].pop();
			}
		}
	}
	cout << total;
}
*/