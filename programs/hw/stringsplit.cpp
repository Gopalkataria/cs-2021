#include <iostream>
#include <string.h>
using namespace std ;

void spacedigits( char a[] ) {

    int digits = 0 , words = 1 ; 
    int i = 0 ; 
    while ( a[i] != '\0' ){

        if ( isdigit(a[i]))
            digits++ ; 
        if ( a[i] == ' ')
            words++ ; 
        i++ ; 
    } 
    cout << "There are " << words << " Words and " << digits << " Digits in the string " << endl  ; 
    
}

int main() {

	char a[100]   ; 
	cout <<"input" << endl ;
	cin.getline( a , 100 ) ;  

    spacedigits( a ) ; 

}
