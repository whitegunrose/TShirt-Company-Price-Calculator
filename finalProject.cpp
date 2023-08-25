#include <iostream>
#include <iomanip>
#include <string>
#include "functions.cpp" 

using namespace std;

// This is the workspace for our Final Project

int main()
{

	// Default values for these variables so we can reference them in a function
	bool both_sides = false;
	int num_shirts = 1;
	int num_colors = 1;
	int shirt_size = 0;
	double checkout_price = 0;


	// Grabbing user-input for desired values
	GrabInputs(both_sides, num_shirts, num_colors, shirt_size);


	// Displaying users inputted values
	cout << "Shirt printed on both sides?: ";

	if (both_sides)
	{
		cout << "Yes" << endl;
	}

	else
	{
		cout << "No" << endl;
	}

	cout << "Num of shirts: " << num_shirts << endl;
	cout << "Num of colors: " << num_colors << endl;
	cout << "Size of shirts: " << shirt_size << endl;

	cout << endl;
	cout << "------------------------------------" << endl;
	cout << endl;

	// Calling function to calculate users total price

	cout << fixed << setprecision(2);

	checkout_price = CalcTotalPrice(both_sides, num_shirts, num_colors, shirt_size);

	if (checkout_price != 0)
  	{  
    	cout << "Your total: $" << checkout_price << endl;
  	}
  	else if (checkout_price == 0)
  	{
    	cout << "Call for quote" << endl;
  	}

  	cout << endl;



	return 0;
}


