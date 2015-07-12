/* Work out the first ten digits of the sum of 
 * the one-hundred 50-digit numbers
 */
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>

using namespace std;

string large_sum(string a,string b);
int main(){

	int countNum = 100;
	string sum = "0";

	//numbers file
	fstream numbers("numbers.dat",ios_base::in);

	//read numbers
	string  num [countNum];
	for(int i=0; i< countNum;i++){
		//TODO: FIXME
		getline(numbers, num[i]);
		cout << num[i] << endl;
	}

	//sum all numbers
	for(int i =0; i < countNum; i++)
		sum = large_sum(num[i], sum);

	//TODO: print res as string[0] to string[9]

	return 0;
}
string large_sum(string a,string b){
	string sum,max,min;
	int carry = 0;

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
	for(int pos_max = max.length() - 1;pos_max > 0;pos_max++){
		int sum = (int)max[pos_max] - 48;
		cout << max[pos_max] << endl;
	}



	return sum;
}
