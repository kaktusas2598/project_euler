/*By considering the terms in the Fibonacci sequence whose values do not exceed four million,
 *find the sum of the even-valued terms.
 */
#include<iostream>

using namespace std;

int main(){
	int sum = 0;
	int prev2 = 1, prev1 = 1, num = 2;
	int temp = 0;

	while(num < 4000000){
		if(num % 2 ==0)
			sum += num;
		prev2 = prev1;
		temp = prev1;
		prev1 = num;
		num = num + temp;
	}

	cout << "Sum of even Fibonacci numbers below 4 million is: " << sum << endl;

	return 0;
}

