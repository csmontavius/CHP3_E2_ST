/*
File Name: SalesTax
Programmer: Montavius Spratley Burfor
Date: 2/9/2025
Requirements:
Write a program that will compute the total sales tax on a $95 purchase.
Assume the state sales tax is 4 percent and the county sales tax is 2 percent.
Display the purchase price, state sales tax, county sales tax, and total sales tax on the screen.
*/

#include <iostream>
using namespace std;

int main() {
    double purchaseAmount, stateSalesTaxRate, countySalesTaxRate, totalStateTax, totalCountyTax, totalSalesTax;

    cout << "Enter the purchase amount: ";
    cin >> purchaseAmount;

    cout << "Enter the state sales tax rate (as a decimal): ";
    cin >> stateSalesTaxRate;

    cout << "Enter the county sales tax rate (as a decimal): ";
    cin >> countySalesTaxRate;

    totalStateTax = purchaseAmount * stateSalesTaxRate;
    totalCountyTax = purchaseAmount * countySalesTaxRate;
    totalSalesTax = totalStateTax + totalCountyTax;

    cout << "The total sales tax on a $" << purchaseAmount << " purchase is $" << totalSalesTax << endl;

    return 0;
}