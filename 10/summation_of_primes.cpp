// Find sum of all primes below two million
#include <iostream>
#include <math.h> //Compile with -lm

using namespace std;

int main(){

	long long sum = 0;
	for(int i = 2; i < 2000000; i++){
		bool primeTest = true;
		//2 and 3 is primes
		if(i == 2 || i == 3)
			sum += i;
		//Test prime
		else{
			for(int j=2;j<=sqrt((float)i);j++){
				//If number n between 1 and sqrt(n) have any
				//multiples it is prime
				if(i % j == 0){
					primeTest = false;
					break;
				}
			}
			if(primeTest)
				sum += i;
		}
	}
	cout << "Sum of primes bellow two million: " << sum << endl;
	return 0;
}
