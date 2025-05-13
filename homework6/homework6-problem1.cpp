#include <iostream>
#include <vector>

using namespace std;

vector<int> carNumbers;
vector<double> hoursParked;
vector<double> charges;

    // Define a structure to hold car parking details

struct CarParkingCharges
    {
        int car;
        double hours;
        double charge;
    };

int main(){

double calculateCharges(double hours);
void enterCarDetails(CarParkingCharges &carParkingCharges);

        cout << "Welcome to the Car Parking Charges Calculator!" << endl;
        cout << "-----------------------------------------------" << endl;
        cout << "Please enter the car number and the number of hours parked." << endl;
        cout << "-----------------------------------------------" << endl;
        CarParkingCharges carparkingcharges;
        enterCarDetails(carparkingcharges);
 
        cout << "Car\t\tHours\t\tCharges" << endl;
        for (int i=0;i<carNumbers.size();i++){
            cout << carNumbers[i] << "\t\t" << hoursParked[i] << "\t\t" << charges[i] << endl;
        }
    return 0;

}
void enterCarDetails(CarParkingCharges &carParkingCharges){
    double calculateCharges(double hours);
    carParkingCharges.car = 0;
    while (carParkingCharges.car != -1){
    cout << "Enter the car number: ";
    cin >> carParkingCharges.car;
    if (carParkingCharges.car == -1){
            break;
        }
    carNumbers.push_back(carParkingCharges.car);
    cout << "Enter the number of hours parked: ";
    cin >> carParkingCharges.hours;
    hoursParked.push_back(carParkingCharges.hours);
    charges.push_back(calculateCharges(carParkingCharges.hours));
    }

}

double calculateCharges(double hours){
    double charges;
    if (hours <= 3.0){
        return 20.0;
    } else if (hours > 3.0 && hours < 24.0){
         charges = 20.0 + hours * 5.0;
         return charges;
    } else if (hours >= 24.0){
        return 50.0;
    }
    return 0.0;
    // This line should never be reached
}