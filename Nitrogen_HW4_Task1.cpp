// File: blank
// Created by Nitrogen on 10/10/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
class HouseInfo{
private:
    int streetNumber;
    double housePrice;
    string streetName;
public:
     //Defaults when creating a new object
    HouseInfo():streetNumber(0),housePrice(0),streetName(""){};
    void getInfo();
    void printInfo();
};
void HouseInfo ::getInfo() {
    cout<<"Type the street Number"<<endl;
    cin>>streetNumber;
    cout<<"What is the house price"<<endl;
    cin>>housePrice;
    cout<<"What is the street name";
    cin>>streetName;
}
void HouseInfo ::printInfo() {
    cout<<"The house on "<<streetNumber<<" "<<streetName<<" costs $"<<housePrice<<endl;
}
// Prototypes

// Main Program Program
int main(void) {

    for (int i = 0; i < 2; i++) {
      HouseInfo h[i];
      h[i].getInfo();
      h[i].printInfo();
    }
    return 0;
}
// Function Definitions