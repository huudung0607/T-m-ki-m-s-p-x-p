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
int a[1000006];
int F[1000006];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		F[a[i]] = i;
	}
	int cnt = 1;
	for (int i = 1; i <= n - 1; i++) {
		if (F[i] > F[i + 1]) {
			cnt++;
		}
	}
	cout << cnt;

}
