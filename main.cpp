

#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    const double BROKERAGE_FEE = 0.015;
    double purchasePrice, salePrice, netAmount, originalInvestment, totalFees;
    int sharesSold;
    
    cout << "How many shares did you sell? ";
    cin >> sharesSold;
    cout << "What was the sale price: $";
    cin >> salePrice;
    cout << "What was the purchase price: $";
    cin >> purchasePrice;
    
    originalInvestment = sharesSold * purchasePrice;
    totalFees = (sharesSold * salePrice) * BROKERAGE_FEE;
    netAmount = (sharesSold * salePrice) - totalFees;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Amount invested: $" << originalInvestment << endl;
    cout << "Service charges: $" << totalFees << endl;
    cout << "Profit / Loss: $" << netAmount - originalInvestment << endl;
    return 0;
}