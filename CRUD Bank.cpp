// CRUD Bank.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

struct Client {
    string accountNumber;
    string pinCode;
    string name;
    string phone;
    double balance;
};

// Global vector to store clients
vector<Client> clients;

// Function to populate the vector with sample clients
void populateClients() {
    clients.push_back({ "12345", "1111", "John Doe", "555-1234", 1000.50 });
    clients.push_back({ "23456", "2222", "Jane Smith", "555-2345", 2000.75 });
    clients.push_back({ "34567", "3333", "Alice Johnson", "555-3456", 3000.00 });
    clients.push_back({ "45678", "4444", "Bob Brown", "555-4567", 1500.25 });
    clients.push_back({ "56789", "5555", "Charlie Davis", "555-5678", 2500.80 });
}

short readmainmenuoption() {
    short choice = 0;
    cout << "Choose What do you want to do? [1 to 6]?\n";
    cin >> choice;
    return choice;
}

short showmainmenu() {

        cout << "[1] Show Clinet List\n";
        cout << "[2] Add New Clinet\n";
        cout << "[3] Delete Client\n";
        cout << "[4] Update Client Info\n";
        cout << "[5] Find Client\n";
        cout << "[6] Exit\n";
        cout << "==========================================\n";
    return readmainmenuoption();

}

void ShowClientList() {
    system("cls");
    cout << "Show Client List\n";
    for (int i = 0; i < 50; i++) {
        cout << '_';
    }
    cout << endl;

    cout << left << setw(20) << "|  Account Number  "
        << left << setw(12) << "|  Pin Code  "
        << left << setw(30) << "|  Client Name"
        << left << setw(20) << "|  Phone"
        << left << setw(15) << "|  Balance\n";
    for (int i = 0; i < 50; i++) {
        cout << '_';
    }
    cout << endl;


    for (const auto& client : clients) {
        cout << left << setw(20) << client.accountNumber
            << left << setw(12)  << client.pinCode
            << left << setw(30) << client.name
            << left << setw(20) << client.phone
            << left << setw(15) << fixed << setprecision(2) << client.balance
            << endl;
    }

    for (int i = 0; i < 75; i++) {
        cout << '_';
    }

    


    cout << "\nPress Enter to return to the main menu...";
    cin.ignore(); // Ignore any leftover newline in the input buffer
    cin.get();

}

int main() {

    system("cls");
    int OriginalNumber = 0;
    do {

        OriginalNumber = showmainmenu();


        populateClients();


    switch (OriginalNumber) {
    case 1: {
        ShowClientList();
        break;
    }
    }
    } while (OriginalNumber != 6);
    
    return 0;
}

