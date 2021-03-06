// File: blank
// Created by Nitrogen on 10/10/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
class HouseInfo
{
private:
    int streetNumber;
    double housePrice;
    string streetName;
public:
    //Defaults when creating a new object
    HouseInfo(): streetNumber(0), housePrice(0), streetName("")
    {};

    void getInfo(HouseInfo h[])
    {
        for (int i = 0; i < 3; i++)
        {

            cout << "Please enter info for house " << i+1 << endl;
            cout << "Enter the street number: " << endl;
            cin >> h[i].streetNumber;
            cin.ignore();
            cout << "Enter the street name: " << endl;
            getline(cin, h[i].streetName);
            cout << "Enter the price of the house: " << endl;
            cin >> h[i].housePrice;
        }

    }
    void comparePrices(HouseInfo h[]);

    void printInfo(HouseInfo h[])
    {
        cout << "Your market analysis is as follows: " << endl;
        for(int i = 0; i < 3; i++)
        {
            cout << i+1 << " house at: " << h[i].streetNumber << " " << h[i].streetName << " for $" << h[i].housePrice << endl;
        }
    }

};
// Prototypes

// Main Program Program
int main(void) {

    HouseInfo h1;
    HouseInfo h[3];
    h1.getInfo(h);
    h1.printInfo(h);
    h1.comparePrices(h);


    return 0;
}
// Function Definitions
void HouseInfo::comparePrices(HouseInfo h[])
{
        double h1,h2,h3;
        for(int i = 0; i < 3; i++)
        {
            if(i == 0){
                h1 = h[i].housePrice;
            }
            else if (i == 1){
                h2 = h[i].housePrice;
            }
            else if(i == 2){
                h3 = h[i].housePrice;
            }
        }
        //This If statement is used so if 2 houses are the same price it will display both of them
        if (h1 == h2 && h1 == h3)
        {
            cout << "They are all the same!" << endl;
        }
        else if (h1 == h2 && h1 < h3)
        {
            cout << "You should buy house 1 and 2" << endl;
        }
        else if (h2 == h3 && h2 < h1)
        {
            cout << "You should buy house 2 and 3" << endl;
        }
        else if (h1 == h3 && h1 < h2)
        {
            cout << "You should buy house 1 and 3" << endl;
        }
        else if(h1<= h2&& h1<=h3){
            cout<<"The First House is the cheapest"<<endl;
        }
        else if(h2<=h1&&h2<=h3){
            cout<<"The Second House is the cheapest"<<endl;
        }
        else if(h3<=h1&&h3<=h2){
            cout<<"The Third House is the cheapest"<<endl;
        }
    }