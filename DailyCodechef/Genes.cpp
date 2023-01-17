#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	char r, b;
	cin >> r >> b;
	if(r == 'R' || b == 'R')
	    cout << "R\n";
	    
	else if((r == 'B' && b == 'G') || (r == 'G' && b == 'B') || (r == 'B' && b == 'B'))
	    cout << "B\n";
	    
	else if(r == 'G' && r == 'G')
	    cout << "G\n";
	return 0;
}
