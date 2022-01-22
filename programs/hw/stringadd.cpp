#include <iostream>
#include <string.h>
using namespace std ;

void stringadd( char (&s1) [] , char (&s2) [] , char (&s3)[]  ) {

    int end1 = 0 , end2 = 0  ; 
    while (  s1[end1] != '\0') {
        s3[end1] = s1[end1] ; 
        end1++ ; 
    }
    s3[end1] = ' ' ; 
    end1 ++ ; 
    while (  s2[end2] != '\0') {
        s3[end1+end2] = s2[end2 ] ; 
        end2++ ; 
    }

}

int main() {

	char a[100] , b[100] , c[200]   ; 
	cout <<"input s1" << endl ;
	cin.getline( a , 100 ) ; 
    
     cout <<"input s2" << endl ;
	cin.getline( b , 100 ) ;  

    stringadd( a , b, c  ) ; 

    cout << c  << endl ; 

}
