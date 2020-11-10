/*
Student Name: Julia Ju
Student Number:20899368

SYDE 121 Lab: C/C++ Variables and Data Types, Basic Problem Solving Assignment: 1
Filename: a1_q2

I hereby declare that this code, submitted for credit for the course
SYDE121, is a product of my own efforts.  This coded solution has
not been plagiarized from other sources and has not been knowingly
plagiarized by others.
Project:  Sum of intgers
Purpose:  Computes the sum of integers between two positive numbers
Due Date:  Friday, September 25, 2020

Four cases were used to test this application
    1: Two positive values
        - Tested 1 to 100, the expected value was 5050 and the program returned that successfully
    2: One negative value, one positive
        - Tested -1 to 10, the expected value was 44 and the program returned an incorrect value of 54
    3: Two negatives
        - Tested -10 to -1, the expected value was -55 however the program returned an incorrect value of -55
    4: One zero, one positive
        - Tested 0 to 10, the expected value was 55 and hte program returned a value of 55

Range: The working range for this program is all integers larger or equal to 0
The results of the first part of the program provided the following values.
1 to 500 : 125250 // 5 to 2020: 2.0412e+06 // 42 to 32000 : 5.12015e+08
*/

#include <iostream>

using namespace std;

//Function calculates the sum of the integers between two positive numbers
void compute_sum() {

    //variable declarations
    double first_num;    //first number in range
    double last_num;    //last number in range
    double n;    //number of integers between first num and last num
    double sum;    //The equation that calculates the sum of the integers

    //gets input from the user
    cout << "Pick a number: " << "\n";
    cin >> first_num;

    cout << "Pick a number larger than the last number : " << "\n";
    cin >> last_num;
    last_num += 1;   //adds 1 so that the calculation for the number of integers includes the last number

    n = (last_num - first_num); // number of integers
    sum = (n / 2) * (2 * (first_num)+(n - 1)); //calculating sum


    //Resultant message that shows the user the sum
    cout << "The sum of the integers between " << first_num << " and " << last_num-1 << " is " << sum << "\n";
}


int main() {
    //call the compute_sum function
    compute_sum();

}
