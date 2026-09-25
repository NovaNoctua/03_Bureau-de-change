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
    const int tax_rate_cents = 500;

    // Initialisation of the bank account
    string account_number;
    string account_name;
    double account_balance_cents = 100000.;

    // Amount to withdraw
    double withdraw_euro;

    cout << "Quel est votre numero de compte ? " << endl;
    cin >> account_number;

    cout << "Quel est votre nom de famille ? " << endl;
    cin >> account_name;

    cout << "Solde de votre compte CHF : " << account_balance_cents / 100 << endl;
    cout << "Taux de change : 1 CHF = " << CHF_to_EUR_change_rate << " Euro" << endl;
    cout << "Frais d'operation : " << tax_rate_cents / 100 << " CHF" << endl;

    cout << "Entrez la somme souhaitée en Euro :" << endl;
    cin >> withdraw_euro;

    double withdraw_euro_cents;
    withdraw_euro_cents = withdraw_euro * 100;

    double withdraw_chf_cents;
    withdraw_chf_cents = round(withdraw_euro_cents / CHF_to_EUR_change_rate);

    account_balance_cents -= withdraw_chf_cents + tax_rate_cents;

}