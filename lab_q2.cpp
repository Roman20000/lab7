//include library
#include <iostream>


using namespace std;

//include function
int num(int i){
	//printing all the natural numbers between 1 to n
	
	if(i==0)
		return 0;
	else {
		cout<<i<< endl;
		return num(i-1);
		}
	}
//including the main function
int main () {
	int i;
	//asking the user for the nth number
	cout<<" Please give the last number "<< endl;
	cin>>i;
	//calling the num function
	num(i);
	cout<<endl;
	//end
	return 0;
	}
