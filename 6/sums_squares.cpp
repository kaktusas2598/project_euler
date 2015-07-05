/*Find the difference between the sum of the squares of 
 * the first one hundred natural numbers and the square of the sum.
 */
#include <iostream>

using namespace std;

int main(){

	int sum_of_squares = 0;
	int sum;

	for(int i=1; i<=100; i++){
		sum += i;
		sum_of_squares += i*i;
	}
	int diff =  sum*sum - sum_of_squares;

	cout << "Difference between sum of squares and square of sum\n"
		<< "of first 100 natural numbers: " << diff << endl;

	return 0;
}
