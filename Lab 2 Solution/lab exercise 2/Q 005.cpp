#include <iostream>
using namespace std;


int main() {
	double marks;
	cout<<"Please, enter your marks"<<endl;
	cin>>marks; //ask user for his marks

	if (marks >= 80)
		cout<<"A"<<endl;
	else if((marks >= 60) && (marks < 80))
		cout<<"B"<<endl;
	else if((marks >= 40) && (marks < 60))
		cout<<"C"<<endl;
	else
		cout<<"FAIL!"<<endl;
		
		
	
	
	return 0;
}
