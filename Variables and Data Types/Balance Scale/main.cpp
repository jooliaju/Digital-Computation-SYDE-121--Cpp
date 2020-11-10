/*
Student Name: Julia Ju
Student Number:20899368

SYDE 121 Lab: C/C++ Variables and Data Types, Basic Problem Solving Assignment: 1
Filename: a1_q1

I hereby declare that this code, submitted for credit for the course
SYDE121, is a product of my own efforts.  This coded solution has
not been plagiarized from other sources and has not been knowingly
plagiarized by others.
 
Project:  Balance scale
Purpose:  Computes the number of weights to balance a given weight, while maximizing the numbers of the heaviest weight types
Due Date:  Friday, September 25, 2020

Four cases were used to test this application
    1: 751 lbs
        - The expected values for this are 6 x 125lbs and 1 x 1lbs. The program returned these values.
    2: 258 lbs
        - The expected values for this are 1 x 125lbs, 1 x 75lbs, 1 x 42lbs, 1 x 15lbs, 1 x 1lbs. The program returned these values

Range: The working range for this program is all positive integers. Negative integers would work as well, but that wouldn't make sense
since weight cannot be negative.

Part A of the task provided these values
user input of 2048lbs gives an output of:
125 lb : 16
75 lb : 0
42 lb : 1
15 lb : 0
1 lb : 6
*/

#include <iostream>

using namespace std;

//Function calculates the number of specific weights required to balance a weight provided from user input.
void balance_scale() {

    //Variable declarations

        //The weights
    int weight_125 = 125;
    int weight_75 = 75;
    int weight_42 = 42;
    int weight_15 = 15;
    int weight_1 = 1;
    //input weight provided by user
    int given_weight;
    //number of each weight
    int amount_75;
    int amount_42;
    int amount_15;
    int amount_1;

    //takes user input for weight to balance
    cout << "Enter a weight you'd like to balance (in pounds): " << endl;
    cin >> given_weight;

    int amount_125 = given_weight / weight_125; //the number of 125 weights in the given weight
    int rem = given_weight % weight_125; //the "leftover" weight from finding how many 125lbs weihgt can fit in the givne weight

    //nested if statements to find how many weights can fit into the given weight

    if (rem >= 0) {           //if true this block will check how many 75 lbs weights can fit into the remaining weight of 125lbs
        amount_75 = (rem / weight_75);
        rem = rem % weight_75;  //updates remaining weight to what was leftover from dividing 75 lbs

        if (rem >= 0) {  //if true this block will check how many 42 lbs weights can fit into the remaining weight of 75lbs

            amount_42 = (rem / weight_42);
            rem = (rem % weight_42);

            if (rem >= 0) { //if true this block will check how many 15 lbs weights can fit into the remaining weight of 42lbs

                amount_15 = (rem / weight_15);
                rem = (rem % weight_15);


                if (rem >= 0) { //if true this block will check how many 1 lbs weights can fit into the remaining weight of 15lbs

                    amount_1 = (rem / weight_1);
                    rem = (rem % weight_1);


                }

            }

        }
    }



    //Displays the number of each weight required to balance the given weight

    cout << "This is what weights you need to balance " << given_weight << " lbs" << "\n";
    cout << "125 lb : " << amount_125 << "\n";
    cout << "75 lb : " << amount_75 << "\n";
    cout << "42 lb : " << amount_42 << "\n";
    cout << "15 lb : " << amount_15 << "\n";
    cout << "1 lb : " << amount_1 << "\n";

}


int main() {

    //calls function to calculate weights needed to balance a weight from user input
    balance_scale();

}
