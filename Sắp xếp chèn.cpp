#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
using namespace std;

void insertionSort(vector<int> &a, int n)
{
	for (int i = 1; i < n; i++)
	{
		int pos = i - 1, value = a[i];
		while (pos >= 0 && value < a[pos])
		{
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = value;
		cout << "Buoc " << i << ":" << " ";
		for (auto x : a)
		{
			cout << x << " ";
		}
		cout << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	insertionSort(a, n);
}
