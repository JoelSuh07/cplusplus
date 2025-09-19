#include <iostream>
#include <vector>

using namespace std;

const int range = 9;

int commision[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

int main(){

    int counters[range] = {0};
    double input;
    vector<double> sales;

    while(true){
        cout << "Gross Sales: ";
        cin >> input;
        if (input == -999) {
            break;
        }
        sales.push_back(input);
    }

    // Calculate the commission for each sale
for (int size = 0; size < sales.size(); size++){
    double commision = sales[size] * 0.09 + 200;
    int netSales = sales[size] + commision;
    if (netSales >= 1000){
        counters[8] ++;
    } else if (netSales >= 900){
        counters[7] ++;
    } else if (netSales >= 800){
        counters[6] ++;
    } else if (netSales >= 700){
        counters[5] ++;
    } else if (netSales >= 600){
        counters[4] ++;
    } else if (netSales >= 500){
        counters[3] ++;
    } else if (netSales >= 400){
        counters[2] ++;
    } else if (netSales >= 300){
        counters[1] ++;
    } else if (netSales >= 200){
        counters[0] ++;
    }
}

//display the number of salespeople in each range
cout << "Amount of salespeople for each range:" << endl;
cout << "1. $200-$299: " << counters[0] << endl;
cout << "2. $300-$399: " << counters[1] << endl;
cout << "3. $400-$499: " << counters[2] << endl;
cout << "4. $500-$599: " << counters[3] << endl;
cout << "5. $600-$699: " << counters[4] << endl;
cout << "6. $700-$799: " << counters[5] << endl;
cout << "7. $800-$899: " << counters[6] << endl;
cout << "8. $900-$999: " << counters[7] << endl;
cout << "9. $1000 and over: " << counters[8] << endl;

}