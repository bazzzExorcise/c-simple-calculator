#include <iostream>

using namespace std;

int fnumber ;
int lnumber ;
int result ;

int x ;
int op ;
int answer ;

int main() {
	cout << "type ur first and last number" << endl;
	cin >> fnumber;
	cin >> lnumber;

	cout << " is + ( if yes = 1 if no = 0 )" << endl;
	cin >> answer ;

	if (answer == 1) {
		result = fnumber + lnumber;
		cout << "your result is = " ;
		cout << result << endl;
	} else {
		result = fnumber - lnumber;
		cout << "your result is = " ;
		cout << result << endl;
	}

}