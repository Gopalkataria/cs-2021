#include <iostream>
#include <cstring> 
using namespace std ;

int main() {
	string c   ;
	int k = 0 ; 

	cout << " enter string " <<endl  ; 	
	cin >> c ;
       
	for ( int i = 0 ; i < c.length() ; i++ ) {
	switch ( int(c[i]) ) {       	
		case '1' :
		case '2' :
		case '3' :
		case '4' :
		case '5' : 
		case '6' : 
		case '7' : 
		case '8' : 
		case '9' : 
		case '0' : 	
		k ++ ; 
		break ; 
		default :
		break ; 
	}
	}

	cout << k << endl  ;

	return 0 ; 	

}

