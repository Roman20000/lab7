//include library
#include <iostream>


using namespace std;

//include function
int rev(int i){
	//pronting the reverse of a given number
	
	if (i==0)
		return 0;
	else {
		cout<<i%10;
		return rev(i/10);
		}
	}
//including main function
int main () {
	int i;
	// asking the user to enter any number 
	cout<< " Please enter your your number"<<endl;
	cin >>i;
	cout<<" The reverse of the given number is "<<endl;
	//calling the above function
	rev(i);
	cout<<endl;
	//end
	return 0;
	} 
