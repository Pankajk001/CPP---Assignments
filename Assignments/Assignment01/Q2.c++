/*
Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();
*/

#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;

    void initDate()
    {
        day = 06;
        month = 10;
        year = 2002;

        cout << "You Initialized your Default Date as: " << day << "/" << month << "/" << year << endl;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;

        cout << "Your Entered Your Date as: " << day << "/" << month << "/" << year << endl;
    }

    void printDateOnConsole()
    {
        cout << "Your Already Existing Date is: " << day << "/" << month << "/" << year << endl;
    }

    bool isLeapYear()
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return true;

        return false;
    }
};

int menuList()
{
    cout << "Choices are:" << endl;
    cout << "0: Exit Program" << endl;
    cout << "1: initDate" << endl;
    cout << "2: acceptDate" << endl;
    cout << "3: printDate" << endl;
    cout << "4: isLeapYear" << endl;

    cout << "Enter Your Choice: ";
    int choice;
    cin >> choice;

    return choice;
}

int main()
{
    Date d1;
    int choice;

    while ((choice = menuList()) != 0)
    {
        switch (choice)
        {
        case 1:
            d1.initDate();
            break;
        case 2:
            d1.acceptDateFromConsole();
            break;
        case 3:
            d1.printDateOnConsole();
            break;
        case 4:
            d1.isLeapYear();
            break;

        default:
            break;
        }
    }
}
