//include library
#include <iostream>


using namespace std;

//include function
int sumofeven(int n){
	//finding the sum of all the even numbers in the given range
	
	if (n==0)
		return 0;
	else 
		return n+sumofeven(n-2);
	}
//include main function
int main() {
	
	int n,a;
	//asking the user to give the last even number
	cout<< " Please enter your last even number "<< endl;
	cin >>n;
	//calling the above function
	a = sumofeven(n);
	cout << " The sum of all the even numbers between 1 and nth even number is "<<a<<endl;
	//end
	return 0;
	}
