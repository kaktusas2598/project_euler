//Find the largest palindrome made from the product of two 3-digit numbers.
#include<iostream>

using namespace std;

bool isPalindrome(int num);

int main(){
	int lpp = 0; //Largest palindrome product

	//Product for two 3-digit numbers can be 5 or 6 digit number
	
	for(int i = 100; i< 1000; i++){
		for(int j = 100; j< 1000; j++){
			int product = i*j;
			if(isPalindrome(product) && product > lpp)
				lpp = product;
		}
	}
	cout << "Largest Palindrome Product of two 3-digit numbers is: " << lpp << endl;

	return 0;
}

bool isPalindrome(int num){
	int temp = num;
	int dc = 0; //Count digits
	while(true){
		if(temp / 10 != 0){
			dc++;
			temp /= 10;
		}
		else{
			dc++;
			break;
		}
	}
	//Put digits in array
	int* digits = new int[dc];
	for(int i=0; i< dc; i++){
		if(i == dc-1)
			digits[i] = num;
		else
			digits[i] = num%10;
		num /= 10;
	}
	//Check if palindrome
	for(int j=0;j<=dc/2;j++){
		if(digits[j] == digits[dc-j-1])
			continue;
		else return false;
	}

	return true;
}
