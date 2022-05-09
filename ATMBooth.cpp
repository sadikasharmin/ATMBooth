#include <iostream>
using namespace std;
int accNum, mobNum, options;
int balance = 500;
int useFrom(int a)
{
    switch (a)
    {
    case 1:
        cout << "Enter your account number = ";
        cin >> accNum;
        break;
    case 2:
        cout << "Enter your Mobile account number = ";
        cin >> mobNum;
        break; 

    default:
        break;
    }
}
void mainFuction(int b)
{
    switch (b)
    {
    case 1:
        int depositeAmount;
        cout << "Enter your deposite Amount";
        cin >> depositeAmount;
        balance += depositeAmount;
        break;
    case 2:
        cout << "Your amount is " << balance << " $ " << endl;
        break;
    case 3:
        int withdrawAmount;
        cout << "Enter your withdraw Amount";
        cin >> withdrawAmount;
        if (balance > withdrawAmount)
        {
            balance -= withdrawAmount;
        }
        break;

    default:
        break;
    }
}
int main()
{

    cout << "Welcome to ATM booth" << endl;
    cout << "1.From account" << endl;
    cout << "2.From Mobile banking" << endl;
    int checkFrom;
    cin >> checkFrom;
    useFrom(checkFrom);
    if (checkFrom <= 2)
    {
        do
        {
            cout << "********Menu**********" << endl;
            cout << "1.deposite" << endl;
            cout << "2.balace query" << endl;
            cout << "3.withdraw" << endl;
            cout << "4.Exit" << endl;
            cout << "**********************" << endl;
            cout << "Enter number: ";
            cin >> options;
            mainFuction(options);
        } while (options != 4);
    }

    return 0;
}