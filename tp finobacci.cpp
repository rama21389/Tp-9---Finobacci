/* Fib 1 - fib 2 - fib 3

*/

#include <iostream>

unsigned Fib1 (unsigned);
unsigned Fib2 (unsigned);
unsigned Fib3 (unsigned);
using namespace std;

int main () {
	
	int b;
	
cout<< "Ingrese un numero"<< endl;
cin>> b;
	
for (int i=0 ; i<=b ; i++){


cout<< "F:"<< i<< " " <<Fib1(i)<< endl;

}

cout<< " "<< endl;

for (int i=0 ; i<=b ; i++){


cout<< "F:"<< i<< " " <<Fib2(i)<< endl;

}

cout<< " "<< endl;

for (int i=0 ; i<=b ; i++){


cout<< "F:"<< i<< " " <<Fib3(i)<< endl;

}

}


unsigned Fib1 (unsigned i) {
	
if (i<2)
return i;
return (Fib1 (i-1) + Fib1(i-2) ); 
	
}

unsigned Fib2 (unsigned i){
	
	int f[3]={0,1,1} ;
	
if (i<2)
	return f[i];
	return (Fib2(i-1) + Fib2 (i-2));
	
}

unsigned Fib3 (unsigned i){
	
int f[50];

for (int a=0; a<=i;a++)
	
	return f[a] = Fib1(i);
	
}
