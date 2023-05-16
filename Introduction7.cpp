#include <iostream>

using namespace std;

void emptyPointer(int* pInput, int sizeOfArray) {
	
	cout << "Emptying pointer: " << endl;

	for (int i = 0; i < sizeOfArray; i++) {
		cout << "pInput: " << pInput <<", Value: " << *pInput<<endl; 
		pInput++;
	}
}

int main() {
	
	// 3 equivalent ways to define pointer of an array (starting element)
	int anInt[] = { 220,330,400 };
	cout << "anInt: " << anInt<<endl;

	int* pAnInt = anInt;
	cout << "pAnInt: " << pAnInt<<endl;

	int* pAnInt2 = &anInt[0];
	cout << "pAnInt2: " << pAnInt2<<endl;

	emptyPointer(pAnInt, 3); 

	return 0;
}