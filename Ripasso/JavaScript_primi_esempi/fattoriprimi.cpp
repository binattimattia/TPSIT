#include <iostream>

using namespace std;

int main(int argc, char **argv) //qui cambia
{
	int n,r,f; //non mi serve
	
	cout << "inserisci il numero da scomporre : "; //qui cambia
	cin >> n;   // qui cambia
	
	f=2;
	while(n>1) {

	   if(n%f==0){
          cout << f << endl; //qui cambia
          n=n/f;
       }
       else {
          f=f+1;          
       }	      	
		
    }
	
	return 0;
}

