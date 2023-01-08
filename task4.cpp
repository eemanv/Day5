#include <iostream>
using namespace std;



main ()
{
    int hrsNeeded;
    int days;
    int no_ofWorkers;
    float workingDays;
    float totalWork;
    float totalhours;
    cout << "Enter the hours needed: ";
    cin >> hrsNeeded;
    cout << "Enter days: ";
    cin >> days;
    cout << "Enter number of workers: ";
    cin >> no_ofWorkers;

    workingDays= days - (0.1*days);
    totalWork=workingDays*no_ofWorkers;
    totalhours= totalWork *10;

    if(totalhours > hrsNeeded)
    {
        float hrs_left;
        hrs_left= totalhours - hrsNeeded;
        cout << "YeS! " << hrs_left <<" hours left";
    }
    if (totalhours < hrsNeeded)
    {
        float hrs_need;
        hrs_need=totalhours - hrsNeeded;
        cout << "Not enough time!" << hrs_need << "hours needed";
    }
}