#include <iostream>
#include <string.h>
using namespace std ; 

void Reverse( char a[] ){
    int last  = 0  ;
	char b[100] ; 

	while ( a[last] != '\0' ){ 
		last++ ; } // finding the position of last char
	
	for ( int n = last  ; n >=0 ; n--  ) {
		b[n] = a[last-n] ; //  swapping places in a new variable 
	}
	
	for ( int i = 0 ; i <=last ; i++ ) {
		cout << b[i] ;  // printing the new string 
	}

}

int main() {

	char a[100]   ; 
	cout <<"input" << endl ;
	cin.getline( a , 100 ) ; 
   
   Reverse(a) ; 
	return  0 ; 


}
