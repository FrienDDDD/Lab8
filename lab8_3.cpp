#include<iostream>
using namespace std;

char before(char x){
	char a[26] = {'A','B','C','D','E','F','G','H','I','G','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int i = 0 ;
	while(i < 26){
		if( x == 'A'){
			return a[25] ;
		}
		if(a[i] == x){
			return a[i-1] ;
		}else{
			i ++ ;
		}
	}
	if( i == 26){
		return '0' ;
	}
	
	return 0 ;

}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	
	return 0;

}
