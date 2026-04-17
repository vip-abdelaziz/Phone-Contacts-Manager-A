#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// ==========================================
// 1. [ Sarah ] - Data Architect
// ==========================================
class Contact {
private:
    string name, phone, email, address;
public:
    Contact(string n, string p, string e = "N/A", string a = "N/A") 
        : name(n), phone(p), email(e), address(a) {}

    string getName() const { return name; }
    
    void display() const {
        cout << "Name   : " << name << "\nPhone  : " << phone 
             << "\nEmail  : " << email << "\nAddress: " << address << endl;
        cout << "--------------------------------" << endl;
    }
};

class ContactsManager {
private:
    vector<Contact> contacts;

public:
    // 2. [ Sama ] - Addition Logic
    void addContact(const Contact& c) {
        contacts.push_back(c);
        cout << "Contact added successfully!" << endl;
    }

    // 3. [ Amira ] - Search Logic
    void searchContact(string target) {
        bool found = false;
        for (const auto& c : contacts) {
            if (c.getName() == target) {
                c.display();
                found = true;
            }
        }
        if (!found) cout << "Contact not found." << endl;
    }

    // 4. [ Salma 1 ] - Update Logic
    void updateContact(string target) {
        // Implementation for updating contact details
    }

    // 5. [ Salma 2 ] - Maintenance (Delete & Count)
    void deleteContact(string target) {
        // Implementation for deleting a contact
    }

    void showStats() {
        cout << "Total Contacts: " << contacts.size() << endl;
    }

    // For Salma 3 to use in the Menu
    void displayAll() {
        if (contacts.empty()) cout << "List is empty." << endl;
        for (const auto& c : contacts) c.display();
    }
};

#endif
