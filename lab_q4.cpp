//include library
#include <iostream>


using namespace std;

//include function
int sum(int n){
	//finding the sum of all natural numbers between 1 and nth number

	if(n ==0)
		return 0;
        else
		return n+sum(n-1);
	}
// including the main function
int main()
{
	int n,a; 
	//asking the user to enter the last natural number
	cout<<" Please enter the last natural number "<<endl;
	cin>>n;
	//calling the function
	a = sum(n);
	cout<<" The sum of all natural numbers from 1 to n is "<<a<<endl;
	//end
	return 0;
	}
