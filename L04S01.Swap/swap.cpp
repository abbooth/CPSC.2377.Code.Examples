/*
 * File: swap.cpp
 * Author: Keith Bush (2013)
 */
#include <iostream>
using namespace std;

void swap(int a, int b){
	int tmp = a;
	a = b;
	b = tmp;
}

int main(){

	int x = 5, y = 7;
	cout << "Before: " << x << " " << y << endl;
	swap(x,y);
	cout << "After:  " << x << " " << y << endl;

	system("PAUSE");

	return 0;
}
