//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
#include<iostream>

using namespace std;

int main(){

	long long i = 1;

	while(true){
		if(i%11==0 && i%12==0 && i%13==0 && i%14==0 && i%15==0 &&
		   i%16==0 && i%17==0 && i%18==0 && i%19==0 && i%20==0){
		   	cout << "Smallest multiple of numbers 1-20 is: " << i <<endl;
		   	break;
		}
		i++;
	}

	return 0;
}
