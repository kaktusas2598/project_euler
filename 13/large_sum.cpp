/* Work out the first ten digits of the sum of 
 * the one-hundred 50-digit numbers
 */
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>

using namespace std;

string large_sum(string &a,string &b);
int main(){

	int countNum = 100;
	string sum = "0";

	//numbers file
	fstream numbers("numbers.dat",ios_base::in);

	//read numbers
	string  num [countNum];
	for(int i=0; i< countNum;i++){
		getline(numbers, num[i]);
	}

	//sum all numbers
	for(int i =0; i < countNum; i++)
		sum = large_sum(num[i], sum);

	//TODO: print res as string[0] to string[9]

	return 0;
}
string large_sum(string &a,string &b){
	string res,max,min;
	int carry = 0;
	int sum = 0;

	if(a.length() > b.length()){
		max = a;
		min = b;
	}else{
		max = b;
		min = a;
	}

	//TODO: FINISH
	//add min to max
	cout << max << endl;
	int pos_min = min.length() - 1;
	for(int pos_max = max.length() - 1;pos_max >= 0;pos_max--){
		sum = max[pos_max] - '0';
		cout << sum << endl;
	}



	return res;
}
