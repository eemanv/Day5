#include <iostream>
using namespace std;

float pyramidVolume(float length, float width , float height , string unit);

main ()
{
 float length, width , height;
 string unit;
 float result;
 result = pyramidVolume(length, width , height , unit);
 cout << "the volume is " << result << unit <<"cubicmeters " ;
}
float pyramidVolume(float length, float width , float height, string unit)
{
    float volume;
    float total;
    cout << "Enter length: " ;
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter unit in which you want to convert: ";
    cin >> unit;
    volume = (length * width * height)/3;
if (unit == "millimeters")
{
   total = volume * 1000000000;
   return total;
}
if (unit == "centimeters")
{
    total = volume * 1000000;
    return total;
}
if (unit == "kilometers")
{ 
    total = volume /1000000000;
    return total;  
}
if (unit == "meter" )
{
    return volume;
}
 return 0;

}
