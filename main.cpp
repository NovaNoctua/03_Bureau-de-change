/* --------------------------- 
Laboratoire : 03
Auteur(s) : Maël Naudet
Date : 23 septembre 2026
But : Bureau de change 
Remarque(s) : 
--------------------------- */

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Initialisation of constants
    const double CHF_to_EUR_change_rate = 1.024;
    const int tax_rate = 5.00;

    // Initialisation of the bank account
    string account_number;
    string account_name;
    double account_balance = 1000.;

    cout << "Quel est votre numero de compte ? ";
    cin >> account_number;

    cout << "Quel est votre nom de famille ? ";
    cin >> account_name;

    cout << "Solde de votre compte CHF : " << account_balance << endl;
    cout << "Taux de change : 1 CHF = " << CHF_to_EUR_change_rate << " Euro" << endl;
    cout << "Frais d'operation : " << tax_rate << " CHF" << endl;
}