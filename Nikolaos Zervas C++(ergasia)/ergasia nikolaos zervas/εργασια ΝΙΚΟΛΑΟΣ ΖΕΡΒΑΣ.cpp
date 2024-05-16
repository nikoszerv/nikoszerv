#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Δομή για την αποθήκευση ενός έξοδου
struct Expense {
    string description;
    double amount;
    string category;
};

// Λίστα εξόδων
vector<Expense> expenses;

// Συνάρτηση για την προσθήκη εξόδου
void AddExpense() {
    Expense expense;
    cout << "Enter description: ";
    cin >> expense.description;
    cout << "Enter amount: ";
    cin >> expense.amount;
    cout << "Enter category: ";
    cin >> expense.category;
    expenses.push_back(expense);
    cout << "Expense added successfully." << endl;
}

// Συνάρτηση για τη διαγραφή εξόδου
void DeleteExpense() {
    int index;
    cout << "Enter the index of the expense to delete: ";
    cin >> index;
    if (index >= 0 && index < expenses.size()) {
        expenses.erase(expenses.begin() + index);
        cout << "Expense deleted successfully." << endl;
    } else {
        cout << "Invalid index." << endl;
    }
}

// Συνάρτηση για την εκτύπωση των εξόδων
void PrintExpenses() {
    cout << "Expenses:" << endl;
    for (int i = 0; i < expenses.size(); ++i) {
        cout << i << ". " << expenses[i].description << " - $" << expenses[i].amount << " (" << expenses[i].category << ")" << endl;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "1. Add Expense\n2. Delete Expense\n3. Print Expenses\n4. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                AddExpense();
                break;
            case 2:
                DeleteExpense();
                break;
            case 3:
                PrintExpenses();
                break;
            case 4:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}

