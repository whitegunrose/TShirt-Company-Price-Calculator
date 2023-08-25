#include <iostream>
#include <string>

using namespace std;

// Helper functions to grab user input

void GrabInputs(bool& bothSides, int& numShirts, int& numColors, int& shirtSize);
void GrabBoolSides(bool& bothShirtSides);
void GrabNumShirts(int& numOfShirts);
void GrabNumColors(int& numOfColors);
void GrabShirtSize(int& sizeOfShirt);

// Function to calculate total price

double CalcTotalPrice(bool both_sides, int num_shirts, int num_colors, int shirt_size);





void GrabInputs(bool& bothSides, int& numShirts, int& numColors, int& shirtSize)
{

	// Grabbing value of bool variable both_sides

	GrabBoolSides(bothSides);

	// Grabbing value of int variable num_shirts

	GrabNumShirts(numShirts);

	// Grabbing value of int variable num_colors

	GrabNumColors(numColors);

	// Grabbing value of string variable shirt_size

	GrabShirtSize(shirtSize);

}




void GrabBoolSides(bool& bothShirtSides)
{
	// Grabbing value of bool variable both)sides

	string bool_answer;
	cout << endl;                
	cout << "Would you like print on both sides of your shirt? (y/n): ";
	cin >> bool_answer;



	if (bool_answer == "y" || bool_answer == "Y")
	{
		bothShirtSides = true;
	}
	else if (bool_answer == "n" || bool_answer == "N")
	{
		bothShirtSides = false;
	}

	if (bothShirtSides)
	{
		cout << " - You said yes" << endl;
	}
	else
	{
		cout << " - You said no" << endl;
	}

	cout << endl;


}





void GrabNumShirts(int& numOfShirts)
{

	int placeHolder;

	cout << "How many shirts would you like to purchase? (Minimum of 12): ";
	cin >> placeHolder;

	if (placeHolder < 12)
	{
		cout << "Invalid amount. Please select a minimum of 12 shirts: ";
		cin >> placeHolder;
	}

	numOfShirts = placeHolder;

	cout << " - You're purchasing " << numOfShirts << " shirts" << endl;

	cout << endl;

}





void GrabNumColors(int& numOfColors)
{

	int place_holder;

	cout << "How many colors would you like printed? (Minimum of 1, Max of 5): ";
	cin >> place_holder;


	if (place_holder < 1 || place_holder > 5)
	{
		cout << "Invalid number of colors to print. Please select a number from 1 - 5: ";
		cin >> place_holder;
	}

	numOfColors = place_holder;

	cout << " - You're printing " << numOfColors << " colors on your shirts" << endl;
	
	cout << endl;

}





void GrabShirtSize(int& sizeOfShirt)
{

	int temp_var;

	cout << "Please select what size shirts you'd like to purchase: " << endl;
    cout << "Enter num 1, 2, or 3" << endl;
	cout << " - 1: Youth, 2: Adult (S - XL), 3: Adult (2XL - 5XL)" << endl;
	cin >> temp_var;

	sizeOfShirt = temp_var;

	cout << "You've selected: ";

	switch (sizeOfShirt)
	{
		case 1:
			cout << "Youth";
	      	break;

	    case 2:
	      	cout << "Adult (S - XL)";
	      	break;

	    case 3:
	      	cout << "Adult (2Xl - 5XL)";
	      	break;
	}

	cout << endl;
}





double CalcTotalPrice(bool both_sides, int num_shirts, int num_colors, int shirt_size)
{
  // If base_price = 0, call for quote
  double base_price = 0;

  // Sorting into shirt size buckets, with base price = youth size
	if (num_shirts >= 12 && num_shirts < 25)
  {
    base_price = 19.69;
  }
	else if (num_shirts >= 25  && num_shirts < 50)
  {
    base_price = 9.69;
  }
	else if (num_shirts >= 50 && num_shirts < 200)
  {
    base_price = 7.70;
  }
	else if (num_shirts >= 200 && num_shirts < 300)
  {
    base_price = 6.70;
  }
  else if (num_shirts >= 300)
  {
    return 0;
  }

  // Applying color print modifier. +1.00 for every color
  if (num_shirts >= 12 && num_shirts < 25)
  {
    for (int i = 0; i < num_colors - 1; i++)
      {
        base_price += 1.00;
      }
  }
  else if (num_shirts >= 25 && num_shirts < 300)
  {
    if (num_colors == 2)
    {
      base_price += 2.00;
    }
    else if (num_colors == 3)
    {
      base_price += 3.00;
    }
    else if (num_colors == 4)
    {
      base_price += 4.00;
    }
    else if (num_colors == 5)
    {
      base_price += 5.00;
    }
  }
  
  if (shirt_size == 2)
  {
    base_price += 0.30;
  }
  else if (shirt_size == 3)
  {
    if (num_shirts > 50)
    {
      base_price += 1.00;
    }
    base_price += 0.95;
  }

  if (both_sides)
  {
    base_price += 3.00;
  }
  return num_shirts * base_price;
}


