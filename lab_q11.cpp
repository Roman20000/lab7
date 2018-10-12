//include library
#include <iostream>


using namespace std;

//include function
int hcf(int x, int y){
	//finding the hcf of the given two numbers
	if (y==0)
		return x;
	else
		return hcf(y, x%y);
	}
//including main function
int main () {
	int x,y,n;
	//asking the user to enter any two numbers
	cout<< " Please enter two numbers of which you want to find hcf " << endl;
	cin>>x>>y;
	// calling the above function
	n = hcf(x,y);
	cout<< " The hcf of the given two numbers "<<x<<" and "<<y<<" is "<<n<<endl;
	//end
	return 0;
	}
