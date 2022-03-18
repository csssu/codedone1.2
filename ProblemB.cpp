#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	for(int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		
		long array[n];
		
		for(int j = 0; j < n; j++)
		{
			cin >> array[j];
		}
		
		sort(array, array + n);
		
		string answer = "NO";
		
		long
			redSum = 0,
			blueSum = array[0];
			
		for(int j = 1; j < (n + 1) / 2; j++)
		{
			blueSum += array[j];
			redSum += array[n - j];
			
			if(blueSum < redSum)
			{
				answer = "YES";
				break;
			}
		}
		
		cout << answer << endl;
	}

	return 0;
}
