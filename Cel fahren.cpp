#include <iostream>
#include <conio.h>
using namespace std;
int main() {
double celsius;
double c1, c2, c3;
double farenheit;
double f1, f2, f3;

cout << "Enter 3 Celsius : " << endl;
cin >> c1 >> c2 >> c3;
cout << "Enter 3 Farenheit : " << endl;
cin >> f1 >> f2 >> f3;

double fc1 = (9.0/5)*c1+32;
double fc2 = (9.0/5)*c2+32;
double fc3 = (9.0/5)*c3+32;

double cf1 = (f1-32)*5/9; 
double cf2 = (f2-32)*5/9;
double cf3 = (f3-32)*5/9;

cout << "Celsius       Farenheit  |  Farenheit       Celsius   " << endl;
cout << "  " << c1 << "              " << fc1 << "     |        " << f1 << "            " << cf1 << endl;
cout << "  " << c2 << "              " << fc2 << "     |        " << f2 << "            " << cf2 << endl;
cout << "  " << c3 << "              " << fc3 << "     |        " << f3 << "            " << cf3 << endl;
return 0;
}
