//project (Expense Tracker Application)

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Expense {
public:
    string description;
    double amount;

    Expense(string desc, double amt) : description(desc), amount(amt) {}
};

class ExpenseTracker {
private:
    vector<Expense> expenses;

public:
    void addExpense(string description, double amount) {
        expenses.push_back(Expense(description, amount));
    }

    // Νέα συνάρτηση για την εισαγωγή εξόδων από τον χρήστη
    void addExpenseFromUserInput() {
        string desc;
        double amt;

        cout << "Enter description of expense: ";
        getline(cin, desc);

        cout << "Enter amount: ";
        cin >> amt;

        // Αφαίρεση του '\n' από την cin πριν την κλήση getline για να αποφευχθεί πρόβλημα με το buffer
        cin.ignore();

        addExpense(desc, amt);
    }

    void deleteExpense(int index) {
        if (index >= 0 && index < expenses.size()) {
            expenses.erase(expenses.begin() + index);
        } else {
            cout << "Invalid expense index." << endl;
        }
    }

    void displayExpenses() {
        if (expenses.empty()) {
            cout << "No expenses recorded." << endl;
            return;
        }

        cout << "Expenses:" << endl;
        for (size_t i = 0; i < expenses.size(); ++i) {
            cout << i << ". " << expenses[i].description << ": $" << expenses[i].amount << endl;
        }
    }

    double calculateTotalExpenses() {
        double total = 0.0;
        for (size_t i = 0; i < expenses.size(); ++i) {
             total += expenses[i].amount;
            }
        return total;
    }

    void displayMonthlySummary() {
        cout << "Monthly Summary:" << endl;
        cout << "Total expenses: $" << calculateTotalExpenses() << endl;
    }
};

int main() {
    ExpenseTracker tracker;

    tracker.addExpense("Groceries", 50.0);
    tracker.addExpense("Dinner", 30.0);

    tracker.displayExpenses();

    tracker.deleteExpense(1);

    // Εισαγωγή εξόδου από τον χρήστη
    tracker.addExpenseFromUserInput();

    tracker.displayExpenses();

    tracker.displayMonthlySummary();

    return 0;
}

