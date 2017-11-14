#include <iostream>

using namespace std;

int main() {

	int number, a, b;

//	cout << "input int" << endl;
	cin >> number;
    
	if (  number < 15 ) {
		while ( number-- ) {  
			cin >> a >> b;

			if ( a > b )		cout << ">" << endl;	
			else if ( a < b  )	cout << "<" << endl;
			else 				cout << "=" << endl;
		}
	}
	return 0;
}
