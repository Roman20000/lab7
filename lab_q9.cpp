//include library
#include <iostream>


using namespace std;

//include function
int fact(int i){
	//finding the factorial of any given number
	if (i==0)
		return 1;
	else 
		return i*fact(i-1);
	}
//including main function
int main () {
	int i;
	int b;
	//asking the user to enter any number
	cout << " Please enter any number "<< endl;
	cin>>i;
	// calling the above function
	b = fact(i);
	cout << " The factorial of the given number is "<<b<<endl;
	//end
	return 0;
	}
	
