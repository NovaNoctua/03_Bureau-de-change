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
#include <iomanip>

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

    // Ticket Frame Decoration
    const char corner_decoration = '+';
    const char width_decoration = '-';
    const char height_decoration = '|';

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

    // Ticket avec des setw
    // http://sdz.tdct.org/sdz/c-les-manipulateurs-de-flux.html
    cout << "Somme CHF : " << withdraw_euro_cents / 100 << ", Solde compte : " << account_balance_cents / 100 << endl << endl;

    cout << corner_decoration << setfill(width_decoration) << setw(30) << corner_decoration << endl;
    cout << setfill(' ');
    cout << height_decoration << endl;

    cout << height_decoration << " " << account_name << endl;
    cout << height_decoration << " " << account_number << endl;

    cout << height_decoration << endl;

    cout << height_decoration  << left << setw(15) << " Somme Euro";
    cout << right << setw(8) << ": " << withdraw_euro_cents / 100 << endl;

    cout << height_decoration << left << setw(15) << " 1 CHF en Euro";
    cout << right << setw(8) << ": " << CHF_to_EUR_change_rate << endl;

    cout << height_decoration << endl;

    cout << height_decoration << left << setw(15) << " Somme CHF";
    cout << right << setw(8) << ": " << withdraw_chf_cents / 100 << endl;

    cout << height_decoration << left << setw(15) << " Frais ";
    cout << right << setw(8) << ": " << tax_rate_cents / 100 << endl;

    cout << height_decoration << endl;

    cout << height_decoration << left << setw(15) << " Solde Compte ";
    cout << right << setw(8) << ": " << account_balance_cents / 100 << endl;

    cout << height_decoration << endl;

    cout << corner_decoration << setfill(width_decoration) << setw(30) << corner_decoration << endl;

    // Ticket brut
    // cout << endl << "+--------------------------------+" << endl;
    // cout << "|" << endl;
    // cout << "| " << account_name << endl;
    // cout << "| " << account_number << endl;
    // cout << "|" << endl;
    // cout << "| Somme Euro : " << withdraw_euro_cents / 100 << endl;
    // cout << "| 1 CHF en Euro: " << CHF_to_EUR_change_rate << endl;
    // cout << "|" << endl;
    // cout << "| Somme CHF : " << withdraw_chf_cents / 100 << endl;
    // cout << "| Frais : " << tax_rate_cents / 100 << endl;
    // cout << "|" << endl;
    // cout << "| Solde Compte : " << account_balance_cents / 100 << endl;
    // cout << "|" << endl;
    // cout << "+--------------------------------+" << endl;
}