// I will provide 2 solutions, but I think the second one is more efficienta and can be useful in real life. You may try both

#include <iostream>
using namespace std;

int main(){
double userNum;
cin>>userNum; //ask user to insert a number

//use AND operator to create 20<= x <= 50
if ((userNum >= 20) && (userNum<=50)) {
	cout<<"Valid number. Proceed to next input"<<endl;
}

return 0;
}




/*
int main() {
int counter;
double userNum;
cout<<"Dear user, feel free to choose any number you want."<<endl;

// use  a loop to make the program run several times
for(counter=1; counter > 0; counter++) {
	cin>>userNum;
	if((userNum >= 20) && (userNum<=50)) {
		cout<<"Valid number. Proceed to next input"<<endl;
	}
	// use (else ) in case the user input other number than the condition or maybe the user did not use a number (maybe a character)
	else {
		cin.clear();
		cin.ignore(100, '\n');
		cout<<"This number is invalid or might not be a number Proceed to next input"<<endl;
	}

	
}

return 0;
}
*/
