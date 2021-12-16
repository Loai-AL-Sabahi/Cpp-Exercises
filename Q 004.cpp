#include <iostream>

using namespace std;


int main() {
	double marks;
	cout<<"Please, enter your marks"<<endl;
	cin>>marks; //ask user for his marks
	if (marks > 50)
		cout<<"PASS!"<<endl;
	else 
		cout<<"FAIL!"<<endl;

	// we can use if else statement without {} since we only have one line to be executed
	
	return 0;
}
