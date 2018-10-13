#include <iostream>
using namespace std;

int main() {
	int lengthOfArray = 9;
	int myArray[10];
	int placeHolder = 0;
	int i = 0;
	int j = 0;
	bool swap = false;
	for (i = 0; i < 10; i++) {
		cout << "Enter digit #" << i + 1 << " to be ordered: " << endl;
		cin >> myArray[i];
	}
	if (swap){
		for (j = 0; j < 9; j++) {
			for (i = 0; i < lengthOfArray; i++) {
				if (myArray[i] > myArray[i + 1]) {
					placeHolder = myArray[i + 1];
					myArray[i + 1] = myArray[i];
					myArray[i] = placeHolder;
					swap = true;
				}
			}
			lengthOfArray--;
		}
}
	else {
		cout << "in order" << endl;

	}
	
	cout << "The sorted list is: " << endl;
	for (i = 0; i < 10; i++) {
		cout << myArray[i] << " ";
	}
	
	system("Pause");
	return 0;
}