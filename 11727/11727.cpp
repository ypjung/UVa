#include <iostream>
#include <algorithm>	// sort
#include <vector> 		// vector

using namespace std;

int main(void) {

	int T, i;
	int a[3];

	cin >> T ; 
	
	for ( i=0 ; i < T ; i++  )	{
		cin >> a[0] >> a[1] >> a[2] ;

		cout << "Case " << i+1 << ": ";

		vector<int> v(a, a+3);
		sort ( v.begin(), v.end()  ) ;

		cout << v[1] << endl;
	}

	return 0;
}

