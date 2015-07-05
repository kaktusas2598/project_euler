//What is the 10 001st prime number?
#include <iostream>

using namespace std;

int main(){

	int n=2,i = 4;//3rd prime is 3, so continue from 4
	int prime_10001 = 0;
	while(n != 10001){
		int multi = 0;
		for(int j=1; j <= i; j++){
			if(i % j == 0)
				multi++;
		}
		if(multi == 2){
			n++;
			if(n == 10001)
				prime_10001 = i;
		}

		i++;
	}
	cout << "10001th prime number is: " << prime_10001 << endl;

	return 0;
}
