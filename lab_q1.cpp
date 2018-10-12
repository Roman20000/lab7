//include library
#include <iostream>


using namespace std;

//include function
int getpower(int a,int b){
	//Calculating power of any number.

        if(b==0)
		return 1;
        else 
		return a*getpower(a,b-1);
	}

//include main function
int main()
{
	int a,b,c; 
	// asking for base and exponent from user
	cout<<"Enter a base: "<<endl;
	cin>>a;
	cout<<"Enter an exponent for the above base: "<<endl;
	cin>>b;
	// Calling the getpower function
	c = getpower(a,b);
	cout<<a<< "^"<<b<<"="<<c<<endl;
	//end
	return 0;
	}
