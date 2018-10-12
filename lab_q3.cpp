//include library
#include <iostream>


using namespace std;

//include function
int numodd(int i){

	//printing all the odd numbers between 1 and nth number
	if(i==1)
		return 1;
	else {
		cout<<i<<endl;
		return numodd(i-2);
		}
	}

//including main function
int main () {
	int i;
	//asking to the user to enter the last odd number
	cout<< " Please enter the last odd number "<<endl;
	cin >>i;
	cout<<" All the odd numbers between 1 and n " <<endl;
	//calling the numodd function
	numodd(i);
	cout<<endl;
	//end
	return 0;
	}
	
