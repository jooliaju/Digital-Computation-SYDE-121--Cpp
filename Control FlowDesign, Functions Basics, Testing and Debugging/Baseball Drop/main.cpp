//*************************************************************
//  Student Name: Julia Ju
//  Student Number:  20899368
//
//  SYDE 121 Lab:  Assignment: 2
//  Filename: a2_q2
//
// I hereby declare that this code, submitted for credit for the course
//  SYDE121, is a product of my own efforts.  This coded solution has
//  not been plagiarized from other sources and has not been knowingly
//  plagiarized by others.
//
// Project:  Baseball drop
// Purpose:  both parts of the program use a distance equation that calculates how far a ball will fall in t seconds.
//           A chart was produced to show how far the ball travelled as time went on.
//
// Test cases:
// PART A:
//         Case 1: t = 5, total distance = 122.583 // Result from calculator is the same
//         Case 2: t = 30, total distance = 4412.992 // Result from calculator is the same
// PART B:
//         Case 1: t = 55.4, total distance = 15049.089 // Result from calculator is the same
//
//
// Range of values: The program is usable with integer and decimal values equal to or larger than 0
//
// Output for step 2: The distance over shoots 15000, but since the ball cant go into the ground, we can approximate the time that it takes to land
//                    would
//  Due Date:  Friday, Oct 9, 2020
//*************************************************************


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


//Function calculates the distance the ball to travels within a 1 second and over the entire time up to 30 seconds.
//This data is displayed in a chart

void part_a(){
    
    //variable declarations
    double G = 9.80665;             //gravitational constant
    double t;                       //time
    double interval_distance;       //distance within 1 second
    double total_distance = 0.0;
    
    
    //Column descriptions
    cout <<setw(20)<<"Time (in sec)"<<setw(40)<<"Distance during interval (in m)"<<setw(30)<<"Total distance (in m)" << endl;
    
    
    //Displays the time, distance travelled within a one second interval, and total distance across the entire time ( up to 30 sec)
    for ( t = 0.0 ; t <= 30.0 && total_distance <= 15000 ; t ++){
        
        // starting time value (0) will always have 0 values in the other columns
        if (t==0){
            total_distance = (1.0/2.0)*G*pow(t,2);                                 //distance equation
            interval_distance = ((1.0/2.0)*G*pow(t,2));
        }
        // calculates distances for the rest of the t values
        else {
            total_distance = (1.0/2.0)*G*pow(t,2);                                 //distance equation
            interval_distance = ((1.0/2.0)*G*pow(t,2)) - (1.0/2.0)*G*pow(t-1,2);   //interval distance is simply total distance subtracted by the last total distance
        }
        
        
        cout << setw(20) << fixed << showpoint << setprecision(1) << t ;                        //time column (seconds)
        cout << setw(40) << fixed << showpoint << setprecision(3) << interval_distance ;        //column displaying distance travelled since the last interval
        cout << setw(30) << fixed << showpoint << setprecision(3) << total_distance << endl;    //column displaying total distance travelled across the entire time
        
    }
}

void part_b(){
    
    //variable declarations (same as part a)
    double G = 9.80665;
    double t; //time
    double interval_distance;
    double total_distance = 0.0;
    
    //Column descriptions
    cout <<setw(20)<<"Time (in sec)"<<setw(40)<<"Distance during interval (in m)"<<setw(30)<<"Total distance (in m)" << endl;
    
    
    //Displays the time, distance travelled within a one second interval, and total distance across the entire time ( up until distance is within 1000 m to the ground)
    for ( t = 0.0 ; total_distance < 14000 ; t ++){
        
        
        // starting time value (0) will always have 0 values in the other columns
        if (t==0){
            total_distance = (1.0/2.0)*G*pow(t,2);
            interval_distance = ((1.0/2.0)*G*pow(t,2));
        }
        // calculates distances for the rest of the t values
        else {
            total_distance = (1.0/2.0)*G*pow(t,2);
            interval_distance = ((1.0/2.0)*G*pow(t,2)) - (1.0/2.0)*G*pow(t-1,2);
        }
        
        
        cout << setw(20) << fixed << showpoint << setprecision(1) << t ;                         //time column (seconds)
        cout << setw(40) << fixed << showpoint << setprecision(3) << interval_distance ;         //column displaying distance travelled since the last interval
        cout << setw(30) << fixed << showpoint << setprecision(3) << total_distance << endl;     //column displaying total distance travelled across the entire time
        
        
    }
    
    
    //when distance is less than 1000m from the ground, the time increment will decrease to 0.1
    for (t ; total_distance < 15000 ; t+= 0.1){
        
        total_distance = (1.0/2.0)*G*pow(t,2);
        interval_distance = ((1.0/2.0)*G*pow(t,2)) - (1.0/2.0)*G*pow((t-.1 ),2);        //interval distance is simply total distance subtracted by the last total distance (which                                                                                   is 0.1 seconds ago)
        
        cout << setw(20) << fixed << showpoint << setprecision(1) << t ;                        //time column (seconds)
        cout << setw(40) << fixed << showpoint << setprecision(3) << interval_distance ;        //column displaying distance travelled since the last interval
        cout << setw(30) << fixed << showpoint << setprecision(3) << total_distance << endl;    //column displaying total distance travelled across the entire time
        
    }
    
    
    
    
}

int main () {
    
    //calls part a
    cout << "PART A" ;
    part_a();
    cout << "\n" << "\n" ;
    
    //calls part b
    cout << "PART B" ;
    part_b();
    
    
}


