#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 1. [ Sarah ] - Class Contact Structure
class Contact {
    // Write properties and constructor here
};

class ContactsManager {
private:
    vector<Contact> contacts;

public:
    // 2. [ Sama ] - Implementation of Add
    void addContact();

    // 3. [ Amira ] - Implementation of Search
    void searchContacts();

    // 4. [ Salma 1 ] - Implementation of Update
    void updateContact();

    // 5. [ Salma 2 ] - Implementation of Delete & Count
    void deleteContact();
    void showCount();
};

// 6. [ Salma 3 ] - Main Menu & User Interface
int main() {
    // Write the menu loop here
    return 0;
}
