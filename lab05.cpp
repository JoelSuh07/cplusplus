#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <random>

using namespace std;

int main()
{
// seed the random number generator
srand(time(0));

// declare and initialize a variable for `setw`
const int WIDTH = 8;
const int MIN = 55, MAX = 270;

//random_device myEngine;
//uniform_int_distribution<int> randomInt(55, 270);

// TODO: declare and initialize 3 `int` variables to random values
// in the range 55 to 270 (inclusive)
int one = MIN + rand() % (MAX - MIN +1);
int two = MIN + rand() % (MAX - MIN +1);
int three = MIN + rand() % (MAX - MIN +1);

// TODO: manipulate the output stream to make it aligned to the left,
// have precision of 3, and fixed
cout << left;
cout << setprecision(3);
cout << fixed;

// TODO: display their values
cout    << setw(WIDTH) << one
        << setw(WIDTH) << two
        << setw(WIDTH) << three << endl;

// TODO: display the sine of each variable
cout    << setw(WIDTH) << sin(one)
        << setw(WIDTH) << sin(two)
        << setw(WIDTH) << sin(three) << endl;
// TODO: display the cosine of each variable
cout    << setw(WIDTH) << cos(one)
        << setw(WIDTH) << cos(two)
        << setw(WIDTH) << cos(three) << endl;

// TODO: display the square root of each variable
cout    << setw(WIDTH) << sqrt(one)
        << setw(WIDTH) << sqrt(two)
        << setw(WIDTH) << sqrt(three) << endl;

// TODO: display the log10 of each variable
cout    << setw(WIDTH) << log10(one)
        << setw(WIDTH) << log10(two)
        << setw(WIDTH) << log10(three) << endl;

// terminate
return 0;
}