/*Author: Davide Fossacecchi
 *A program that calculate the fibonacci value for the lement provided by the user with an iterative function*/

#include <iostream>

using namespace std;

int fibonacci(int element){
	if (element == 0) return 0;
	if (element == 1) return 1;
	int f0, f1, fn;

	f0 = 0;
	f1 = 1;

	for(int i = 2; i <= element; i++){
		fn = f1 + f0;
		f0 = f1;
		f1 = fn;
	}

	return fn;

}

int main(void){
	int elem;
	cout << "enter the number of the element you want the value in the Fibonacci Sequence:";
	cin >> elem;
	cout <<"Its value is "<< fibonacci(elem) << "\n";
	return 0;
}