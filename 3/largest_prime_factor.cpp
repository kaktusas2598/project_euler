//What is the largest prime factor of the number 600851475143 ?
#include<iostream>

using namespace std;

int main(){
	long long original = 600851475143;
	long long num = 600851475143;
	int lpf = 0; //Largest Prime Factor

	//TODO: prime factorisation
	for(long long i = 2; i < num; i++){
		//Check if number is prime
		int multi = 0;
		for(int j = 1; j <= i; j++){
			if(i % j == 0)
				multi++;
		}
		//Check if number is prime factor
		if(multi == 2){
			while(num % i == 0){
				num /= i;
				if(i > lpf) lpf = i;
			}
		}
	}
	cout << "Largest Prime Factor of " << original << " is: " << num << endl;

	return 0;
}
