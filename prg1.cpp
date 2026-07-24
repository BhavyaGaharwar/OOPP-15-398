#include <iostream>
using namespace std;
int main()
{
    int bal, amt, ch;

    cout << "Enter opening balance: ";
    cin >> bal;

    do
    {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Show Balance" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Deposit" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
            case 1:
                cout << "Balance = " << bal << endl;
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amt;

                if (amt <= bal)
                {
                    bal = bal - amt;
                    cout << "Amount Withdrawn Successfully." << endl;
                }
                else
                {
                    cout << "Insufficient Balance." << endl;
                }
                break;

            case 3:
                cout << "Enter amount to deposit: ";
                cin >> amt;

                bal = bal + amt;

                cout << "Amount Deposited Successfully." << endl;
                break;

            case 4:
                cout << "Thank You!" << endl;
                break;

            default:
                cout << "Invalid Choice." << endl;
        }

    } while (ch != 4);

    return 0;
}