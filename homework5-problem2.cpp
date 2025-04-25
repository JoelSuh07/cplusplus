/*
 * homework5-problem2.cpp
 *
 *  Created on: Apr 22, 2025
 *      Author: Joel Suh
 *
 *      An online retailer sells five products whose retail prices are as follows:
 *      Product 1, $2.98;
 *      product 2, $4.50;
 *      product 3, $9.98;
 *      product 4, $4.49 and
 *      product 5, $6.87.
 *      Write an application that reads a series of pairs of numbers as follows:
 *      product number
 *      quantity sold
 *
		Your program should use a switch statement to determine the retail price for each product.
		It should calculate and display the total retail value of all products sold.
		Use a sentinel-controlled loop to determine when the program should stop looping and display the final results.
 *
 */

#include <iostream>
#include <vector>
using namespace std;

int num;
double price, total;

double calcTotal();
void showEachPrice();
void showEachProduct();

pair <string, double> product[2][5] = {
		{"Product 1", "Product 2", "Product 3", "Product 4", "Product 5"},
		{2.98, 4.50, 9.98, 4.49, 6.87}
};

vector<string> productName;
vector<double> productPrice;

int main(){

	while(num != -1){
		cout << "Enter a product number(1-5) (-1 to quit): ";
		cin >> num;

		switch(num){
		case 1:
			cout << "Product 1 is $2.98" << endl;
			productName.push_back(product[0][0]);
			productPrice.push_back(product[1][0]);
			break;
		case 2:
			cout << "Product 2 is $4.50" << endl;
			productName.push_back("Product 2");
			productPrice.push_back(4.50);
			break;
		case 3:
			cout << "Product 3 is $9.98" << endl;
			productName.push_back("Product 3");
			productPrice.push_back(9.98);
			break;
		case 4:
			cout << "Product 4 is $4.49" << endl;
			productName.push_back("Product 4");
			productPrice.push_back(4.49);
			break;
		case 5:
			cout << "Product 5 is $6.87" << endl;
			productName.push_back("Product 5");
			productPrice.push_back(6.87);
			break;
		default:
			break;
			}
		}

	showEachPrice();
	showEachProduct();
	cout << "Total price is : " << calcTotal();

	return 0;
}

double calcTotal(){
	for (double i : productPrice){
		total += i;
	}
	return total;
}

void showEachPrice(){
	for (double i : productPrice){
		cout << i << endl;
	}
}

void showEachProduct(){
	for (string i : productName){
		cout << i << endl;
	}
}

