/*
Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
Create the local objects in respective case and call the function to caluclate area.
Menu options ->
1. Calculate Volume with default values
2. Calculate Volume with length,breadth and height with same value
3. Calculate Volume with different length,breadth and height values
*/

#include <iostream>
using namespace std;

class Volume
{
private:
    int length;
    int breadth;
    int height;
    int volume;

public:
    Volume() : length(1), breadth(1), height(1) {}

    Volume(int length, int breadth, int height) : length(length), breadth(breadth), height(height) {}

    Volume(int length) : length(length), breadth(length), height(length) {}

    void find_volume()
    {
        volume = length * breadth * height;
    }

    void show_volume()
    {
        cout << "Your Volume is: "<<volume<<endl;
    }
};

int menu_list()
{
    cout << "Choose Your Operation" << endl;
    cout << "1. Calculate Volume with default values" << endl;
    cout << "2. Calculate Volume with length,breadth and height with same value" << endl;
    cout << "3. Calculate Volume with different length,breadth and height values" << endl;

    int choice;
    cout << "Enter choice: ";
    cin >> choice;
    cout<<endl;

    return choice;
}

int main()
{
    int choice;
    while ((choice = menu_list()) != 0){
        if(choice == 1){
            cout<<"-----Calculating Volume with default value-----"<<endl;
            Volume v1;
            v1.find_volume();
            v1.show_volume();
        }

        else if(choice == 2){
            int length;
            cout<<"Enter a single Parameter: ";
            cin>>length;
            cout<<"----Calculating Volume with length, breadth and height with same value-----"<<endl;

            Volume v2(length);
            v2.find_volume();
            v2.show_volume();
        }

        else if(choice == 3){
            int l, b, h;
            cout<<"Enter all 3 parameters to find the volume: ";
            cin>>l>>b>>h;
            cout<<"-----Calculating Volume with different length,breadth and height values-----"<<endl;

            Volume v3(l, b, h);
            v3.find_volume();
            v3.show_volume();
        }

        else{
            cout<<"Please Enter correct choice!"<<endl;
        }
    }
}