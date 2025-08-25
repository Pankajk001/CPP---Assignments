/*
Q1. Write a class to find volume of a Cylinder by using following members. (volume of 
Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI) 
Class having following member functions: 
Cylinder() 
Cylinder(double radius, double height) 
getRadius() 
setRadius() 
getHeight() 
setHeight() 
calculateVolume() 
Initialize members using constructor member initializer list. 
 
*/

#include<iostream>
using namespace std;

class Math{
    public:
        static const float PI;
        static float pow(float base, int n){
            float res = 1.0;
            while(n--){
                res = res*base;
            }

            return res;
        }

};


const float Math::PI = 3.142;

class Cylinder{
    private:
        double radius;
        double height;
        double volume;

    public:

        Cylinder() : radius(1.0), height(1.0){}

        Cylinder(double radius, double height) : height(height), radius(radius){}

        void getRadius(){
            cout<<"Radius: ";
            cout<< this->radius <<endl;
        }
        void getHeight(){
            cout<<"Height: ";
            cout<< this->height<<endl;
        }

        void setRadius(double radius){
            this->radius = radius;
        }

        void setHeight(double height){
            this->height  = height;
        }

        double calculateVolume(){
            this -> volume = Math::PI * Math::pow(this->radius, 2) * this->height;

            return volume;

        }
};

int main(){
    Cylinder c1(3.0, 5.0);
    cout<<"Volume using constructor: "<<c1.calculateVolume()<<endl;

    Cylinder c2;
    // cout<<c2.calculateVolume();
    c2.setHeight(3.0);
    c2.getHeight();
    c2.setRadius(5.0);
    c2.getRadius();
    cout<<"volume using setter: "<<c2.calculateVolume()<<endl;
}