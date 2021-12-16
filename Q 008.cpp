#include <iostream>

using namespace std;


int main() {
	int counter1, counter2;
	
	for (counter1 = 0; counter1 < 3; counter1++) { // This outer loop will run after the inner loop. it will loop over the first digit
		for (counter2 =0; counter2 <= 3; counter2++){ // This inner loop will run first looping over the second digit
		cout<<counter1<< " "<<counter2<<endl;		
		}
		
	}
	
	

	return 0;
}




