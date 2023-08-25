#include <iostream>
#include <string>

using namespace std;

// Helper functions to grab user input

void GrabInputs(bool& bothSides, int& numShirts, int& numColors, string& shirtSize);
void GrabBoolSides(bool& bothShirtSides);
void GrabNumShirts(int& numOfShirts);
void GrabNumColors(int& numOfColors);
void GrabShirtSize(string& sizeOfShirt);

// Function to calculate total price

void CalcTotalPrice(double& checkoutPrice, bool both_sides, int num_shirts, int num_colors, string shirt_size);


