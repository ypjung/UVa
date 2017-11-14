#include <iostream>

using namespace std;

int main() {
	int K, pX, pY, X, Y;
	cin >> K;

	while ( K != 0 ) {
		
		cin >> pX >> pY;

		while ( K-- ) {

			cin >> X >> Y;

			if	( pX == X || pY == Y  )		cout << "divisa" << endl;
			else if ( X < pX && Y > pY )	cout << "NO"	<< endl;
			else if ( X > pX && Y > pY )	cout << "NE"	<< endl;
			else if ( X > pX && Y < pY )	cout << "SE"	<< endl;
			else if ( X < pX && Y < pY )	cout << "SO"	<< endl;
			else if ( X == 0 ) 				return 0;
		}
		cin >> K;	
	}
	return 0;
}
