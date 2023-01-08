#include <iostream>
using namespace std;
float taxCalculator(char type , float itemPrice);

main ()
{
    char type;
    float itemPrice;
    float price;


    cout << "Enter Vehicle Type: " ;
    cin >> type;
    cout << "Vehicle Price : ";
    cin >> itemPrice;


    price = taxCalculator(type, itemPrice);
    cout << "The final price of vehicle type of " << type << " after adding tax is $" << price;


}
float taxCalculator(char type , float itemPrice)
{
    float taxrate;
    float taxAmount;
    float finalPrice;
    if(type == 'M')
    {
        taxrate = 6;
    }
    if (type== 'E')
    {
        taxrate = 8;
    }
    if (type == 'S')
    {
        taxrate= 10;
    }
    if (type == 'V')
    {
        taxrate= 12;
    }
    if (type == 'T')
    {
        taxrate= 15;
    }
    taxAmount = itemPrice* taxrate/100;
    finalPrice = itemPrice + taxAmount;
    return finalPrice;


}