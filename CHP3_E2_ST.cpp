/*
File Name: SalesTax Part 2
Programmer: Montavius Spratley Burford
Date: 2/9/2025
Requirements:
Revise the program you wrote for Exercise 3 but instead of 
having state and country tax hard-coded in your program allow
the user to enter the sale taxes as well as the 
amount of purchase and display the total sales tax.
The revision should be created in a new branch of the 
project with thee revised program.
*/

#include <iostream>
using namespace std;

int main() {
    double purchaseAmount, totalSalesTax;

    cout << "Enter the purchase amount: ";
    cin >> purchaseAmount;

    cout << "Enter the sales tax rate (as a decimal): ";
    cin >> totalSalesTax;

   
;
    totalSalesTax = purchaseAmount * totalSalesTax;

    cout << "The total sales tax on a $" << purchaseAmount << " purchase is $" << totalSalesTax << endl;

    return 0;
}
