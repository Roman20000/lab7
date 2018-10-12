//include library
#include <iostream>


using namespace std;

//include function
int fibo(int n){
	//finding the nth term of fibonacci series
	if (n==0 || n==1)
		return (n);
	else
		return fibo(n-1)+fibo(n-2);
	}
//including main function
int main () {
	int n,a;
	// asking the user to enter nth number
	cout << " Please enter the number of desired term of fibonacci series "<< endl;
	cin>>n;
	//calling the above function
	a = fibo(n);
	cout << " The desired term of fibonacci series is "<<a<<endl;
	//end
	return 0;
	}
