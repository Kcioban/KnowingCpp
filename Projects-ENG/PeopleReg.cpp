// Libraries
#include <iostream>
#include <iomanip> // For output manipulation
// -------------------------------------------------------------------
using namespace std;
// -------------------------------------------------------------------
int main() {
    int code, ssn, zipCode, phone;
    string name, street, district, city, state, email, id;
// -------------------------------------------------------------------    
    cout << "\n - To use the platform, create a profile first - \n";
    cout << "\nEnter the code: ";
    cin >> code;
    cin.ignore(); // Clears the keyboard buffer
// -------------------------------------------------------------------
    cout << "Enter the name: ";
    getline(cin, name);
// -------------------------------------------------------------------
    cout << "Enter the street: ";
    getline(cin, street);
// -------------------------------------------------------------------
    cout << "Enter the district: ";
    getline(cin, district);
// -------------------------------------------------------------------
    cout << "Enter the city: ";
    getline(cin, city);
// -------------------------------------------------------------------
    cout << "Enter the state: ";
    getline(cin, state);
// -------------------------------------------------------------------
    cout << "Enter the ZIP code (without punctuation): ";
    getline(cin, zipCode);
// -------------------------------------------------------------------
    cout << "Enter the phone number (without punctuation): ";
    getline(cin, phone);
// -------------------------------------------------------------------
    cout << "Enter the email: ";
    getline(cin, email);
// -------------------------------------------------------------------
    cout << "Enter the social security number (without punctuation): ";
    getline(cin, ssn);
// -------------------------------------------------------------------
    cout << "Enter the ID (without punctuation):";
    getline(cin, id);
// -------------------------------------------------------------------
    cout << "\nProfile created successfully!\n";
// -------------------------------------------------------------------

    // Table
    cout << setfill('-') << setw(40) << "-" << endl; // Line
    cout << "\n Registration Form\n";
    cout << setfill('-') << setw(40) << "-" << endl;
    //--------------------------------------------------------------------------
    cout << left << setw(16) << "| Code "     << "| " << code     << " |" << endl;
    cout << left << setw(15) << "| Name "     << "| " << name     << " |" << endl;
    cout << left << setw(15) << "| Street "   << "| " << street   << " |" << endl;
    cout << left << setw(15) << "| District " << "| " << district << " |" << endl;
    cout << left << setw(15) << "| City "     << "| " << city     << " |" << endl;
    cout << left << setw(15) << "| State "    << "| " << state    << " |" << endl;
    cout << left << setw(15) << "| ZIP Code " << "| " << zipCode  << " |" << endl;
    cout << left << setw(15) << "| Phone "    << "| " << phone    << " |" << endl;
    cout << left << setw(15) << "| Email "    << "| " << email    << " |" << endl;
    cout << left << setw(15) << "| SSN "      << "| " << ssn      << " |" << endl;
    cout << left << setw(15) << "| ID "       << "| " << id       << " |" << endl;
    // -------------------------------------------------------------------------
    cout << setfill('-') << setw(40) << "-" << endl; // Line
    return 0;
}
