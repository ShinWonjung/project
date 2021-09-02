#include <vector>
#include <queue>

using namespace std;

int v, e, st;
// [cost,index]
vector<pair<int, int>>adj[20005];
const int INF = 1e9 + 10;
int d[20005];

void dijkstra()
{
	priority_queue < pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	d[st] = 0;
	pq.push({ d[st],st });
	while (!pq.empty())
	{
		auto cur = pq.top();
		pq.pop();
		int dist = cur.first;
		int idx = cur.second;

		if (d[idx] != dist) continue;
		for (auto nxt : adj[idx])
		{
			int cost = nxt.first;
			int nidx = nxt.second;
			if (d[nidx] > dist + cost)
			{
				d[nidx] = dist + cost;
				pq.push({ d[nidx],nidx });
			}
		}
	}
}