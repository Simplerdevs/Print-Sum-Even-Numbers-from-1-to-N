				
								/* Program to Print Sum Even Numbers from 1 to N */
#include <iostream>
#include <cmath>
using namespace std;


int main()

{

	int num, counter, sum = 0;
	cout << "Please enter a number ! " << endl;
	cin >> num;

	for (counter = 2; counter <= num; counter += 2) {

		sum += counter;

	}

	cout << "Sum of Even numbers from 1 to " << num << " is: " << sum << endl;


    return 0;


	// Created by @ilyes_Trabesli 
}

