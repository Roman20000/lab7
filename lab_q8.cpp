//include library
#include <iostream>


using namespace std;

//include function
int sumofdig(int i){
	//finding the sum of digits of the given number
	if(i==0)
		return 0;
	else 
		return (i%10)+sumofdig(i/10);
	}
//including main function
int main () {
	int i,a;
	//asking the user to enter any number
	cout<< " Please enter any number of your coice " <<endl;
	cin>>i;
	//calling the above function
	a=sumofdig(i);
	cout<<" The sum of the digit of the gven number is "<<a<<endl;
	//end
	return 0;
	}
