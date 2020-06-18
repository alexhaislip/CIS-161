// Joe Struss, jastruss@dmacc.edu, Feb. 2020
// Given a loaded Cart weigth, this program determines the number of U-1234 box bundles that are on the cart
//  then prints out a receipt with a constant holding box cost, shipping cost and tax
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constants
    const double SINGLE_BOX = 17;
    const double CART_WT = 210;
    const double BOX_COST = 19.97;
    const double BOX_SHIP = 2.34;
    const double TAX = .05;

  
    double cartAndBoxes = 0; // To hold the weight of the cart and bundles
    double boxes = 0;             // To hold the weight of the boxes (not truncated)
    int numberOfBoxes = 0;     // To hold the number of boxes (truncated)
    double boxsalecost = 0;    // Total cost of boxes
    double boxshipcost = 0;    // Total cost of boxes to ship
    double boxtax = 0;         // Total tax on the taxes
    int boxtaxint = 0;         // Truncate box tax at two digits
    double boxfinaltotal = 0;  // Final total for order

    // Get the weight of the cart.
    cout << "The cart on its on weighs " << CART_WT << " kg." << endl;
    cout << "Enter the weight of the loaded cart in kg.  " << endl;
    cout << "(and this program will output the number of U-1234 box bundles on the cart): ";
    cin  >> cartAndBoxes;

    // Calculate the weight of the boxes.
    boxes = cartAndBoxes - CART_WT;
  
    // Calculate the number of box bundles.
    numberOfBoxes = boxes / SINGLE_BOX;
  
    // Display the number of box bundles.
    cout << "\nThere are " << numberOfBoxes
         << " U-1234 boxes bundles on the cart.\n \n";
    
    // Calculate costs
    boxsalecost = BOX_COST * numberOfBoxes;
    boxshipcost = BOX_SHIP * numberOfBoxes;
    boxtaxint = (boxsalecost * TAX)*100;
    boxtax = boxtaxint/100.0;
    boxfinaltotal = boxsalecost + boxshipcost + boxtax;
    
    // Show a receipt
    cout << fixed << setprecision(2) << showpoint;
    cout << "Sale price of U-1234 unit(s): $" << setw(8) << boxsalecost << endl;
    cout << "Sales Tax at " << TAX << " percent:     " << setw(8) << boxtax << endl;
    cout << endl;
    cout << "Shipping costs for boxes:      " << setw(8) << boxshipcost << endl;
    cout << endl;
    cout << "Overall Final Total:          $" << setw(8) << boxfinaltotal << endl;
    return 0;
}
