#include "Contact.h"

// ==========================================
// 6. [ Salma 3 ] - UI/UX Developer
// ==========================================
int main() {
    ContactsManager myManager;
    int choice;
    string searchName;

    while (true) {
        cout << "\n--- PHONE CONTACTS SYSTEM ---" << endl;
        cout << "1. Add New Contact" << endl;
        cout << "2. Show All Contacts" << endl;
        cout << "3. Search for Contact" << endl;
        cout << "4. Update Contact" << endl;
        cout << "5. Delete Contact" << endl;
        cout << "6. System Statistics" << endl;
        cout << "0. Exit" << endl;
        cout << "-----------------------------" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            string n, p, e, a;
            cout << "Enter Name: "; cin >> n;
            cout << "Enter Phone: "; cin >> p;
            myManager.addContact(Contact(n, p));
        } 
        else if (choice == 2) {
            myManager.displayAll();
        }
        else if (choice == 3) {
            cout << "Enter name to search: "; cin >> searchName;
            myManager.searchContact(searchName);
        }
        else if (choice == 6) {
            myManager.showStats();
        }
        else if (choice == 0) {
            cout << "Closing system..." << endl;
            break;
        }
        else {
            cout << "Invalid option!" << endl;
        }
    }

    return 0;
}
