/* Work out the first ten digits of the sum of 
 * the one-hundred 50-digit numbers */ 
#include<iostream> 
#include<fstream> 
#include<string> 

using namespace std; 

string large_sum(string &a,string &b); 
int main(){ 
	int countNum = 100;
	string sum = "";

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

	cout<< "First 10 digits of large sum: " << sum.substr(0,10) << endl;

	return 0;
}
string large_sum(string &a,string &b){
	string res,max,min;
	int carry = 0;
	int mod,sum;

	if(b == "")
		return a;
	if(a.length() > b.length()){
		max = a;
		min = b;
		res.resize(a.length(),'0');
	}else{
		max = b;
		min = a;
		if(a.length() == b.length())
			res.resize(a.length()+1,'0');
		else
			res.resize(b.length(),'0');
	}

	//TODO: FINISH
	//add min to max
	string filler1,filler2;
	filler1.resize(res.length()-max.length(),' ');
	filler2.resize(res.length()-max.length(),' ');
	cout <<filler1<< max << endl;
	cout <<filler2<<min << endl;
	int pos_min = min.length() - 1;
	int pos_res = res.length() - 1;
	for(int pos_max = max.length() - 1;pos_max >= 0;pos_max--){
		//add two digits and carry
		sum = (max[pos_max] - '0')+(min[pos_min] - '0') + carry;
		//calculate next carry and current digit(remainder)
		carry = sum/10;
		mod = sum %10;
		//Change current digit of result
		res[pos_res] = mod + '0';
		cout << res << endl;

		if(pos_min == 0)
			break;
		pos_min--;
		pos_res--;
	}

	return res;
}
