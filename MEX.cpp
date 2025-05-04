
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

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);	
	set<int>se;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		se.insert(a[i]);
	}
	int maxval = *max_element(a.begin(), a.end());
	int num = -1;
	for (int i = 1; i <= maxval; i++) {
		if (se.find(i) == se.end()) {
			num = i;
			break;
		}
	}
	if (num != -1) cout << num;
	else cout << maxval + 1;
}

