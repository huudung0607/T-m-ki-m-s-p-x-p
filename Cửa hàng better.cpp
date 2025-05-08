#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}
int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}
	sort(v.begin(), v.end());
	map<int, int> mp;
	for (int i = 0; i < v.size(); i++)
	{
		mp[v[i].first] = 1;
		mp[v[i].second] = -1;
	}
	int cnt = 0;
	int res = 0;
	for (auto x : mp) {
		cnt += x.second;
		res = max(res, cnt);
	}
	cout << res;
}
