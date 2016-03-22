/*
 * Unit 2 Lab 1
 * Lab 3 icecream.cpp
 * Joshua Wilson
 * 03/21/16
 */


#include <iostream>
#include <iomanip>

using namespace std;

int main() {


    double scoop_1 = 1.49; // price for 1 scoop of ice cream
    double scoop_2 = 2.49; // price for 2 scoop of ice cream
    double scoop_3 = 3.49; // price for 3 scoop of ice cream
    int delightful_cones; // size of 1 scoop of ice cream
    int double_delight_cones; // size of 2 scoop of ice cream
    int triple_delight_cones; // size of 3 scoop of ice cream
    double total; // total sales of ice cream
    double total_delight; // total delightful cones wanted
    double total_double; // total double delight cones wanted
    double total_triple; // total triple delight cones wanted

    cout << setprecision(2);
    cout << fixed;

    cout << "Ice cream sale "; // Input the total of single scoop, double scoop, or triple scoop cones
    cout << "how many delightful cones needed? ";
    cin >> delightful_cones;
    cout << "how many double delight cones needed? ";
    cin >> double_delight_cones;
    cout << "how many triple delight cones needed? ";
    cin >> triple_delight_cones; // Calculation of the ice cream cones
    total_delight = delightful_cones * scoop_1;
    cout << "delightful cones sold = " << delightful_cones << " - price $" << total_delight << endl;
    total_double = double_delight_cones * scoop_2;
    cout << "double delight cones sold = " << double_delight_cones << " - Price $" << total_double << endl;
    total_triple = triple_delight_cones * scoop_3;
    cout << "triple delight cones sold = " << triple_delight_cones << " - Price $" << total_triple << endl;

    total = delightful_cones + double_delight_cones + triple_delight_cones;

    cout << "total ice cream sales = $" << total << endl;

    cin.get();
    //cin.get();



    return 0;
}
