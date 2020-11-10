//*************************************************************
//  Student Name: Julia Ju
//  Student Number:  20899368
//
//  SYDE 121 Lab:  Assignment: 2
//  Filename: a2_q1
//
// I hereby declare that this code, submitted for credit for the course
//  SYDE121, is a product of my own efforts.  This coded solution has
//  not been plagiarized from other sources and has not been knowingly
//  plagiarized by others.
//
// Project:  Prime numbers
// Purpose: User input has to be greater than 1, the program will calculate the prime numbers up to that number
//          The program will also indicate if the prime numbers are palidromes, and if the sum of the prime numbers is even / odd.
//
//Test case:
//Enter an integer greater than 1: 13
//2 .. this is a palindrome number !
//3 .. this is a palindrome number !
//5 .. this is a palindrome number !
//7 .. this is a palindrome number !
//11 .. this is a palindrome number !
//13
//The sum of all the listed prime numbers is 41 and it is an odd number
//[test case is correct]
//
// Range of values: The program works with integer values larger than 1
//  Due Date:  Friday, Oct 9, 2020
//*************************************************************


#include <iostream>
using namespace std;

//function references
int check_prime(int num);
bool check_palindrome(int num);
bool check_odd_sum(int num);

//function will take the user input and determine the prime numbers addind up to it, whether they're palindromes, and if the sum of them is odd/even
void compute_primes(){
    
    
    //variable declaratiomns
    
    int input_num;   //user input
    bool is_prime;   //whether value is prime or not
    int sum = 0;     //sum of all the prime values
    
    //keep requesting user for valid input
    do{
        cout << "Enter an integer greater than 1: ";
        cin >> input_num;
    } while (input_num < 1);
    
    
    //goes through numbers up to user input number
    for(int i = 2; i <= input_num; i++){
        // isPrime will be true for prime numbers, calls the is function that checks for prime numbers
        is_prime = check_prime(i);
        
        // if the number is a prime number
        if(is_prime==true){
            //check if its a palindrome number
            if (check_palindrome(i) && i < 10000){  // checks primes less than 10,000
                cout << i << " .. this is a palindrome number ! " << endl;          //message displayed if it is a palidrome
            }
            else {                  // if it is not a palindrome, the prime number will be printed and it will move onto the next number
                cout<< i << "\n" ;
                
            }
        
        sum += i; // adds the prime numbers together
        
        }
        
    }
    
    
    if (check_odd_sum(sum)==true){
        cout << "The sum of all the listed prime numbers is " << sum << " and it is an even number " << endl;  //displays this message if the sum is odd
    }
    else{
        cout << "The sum of all the listed prime numbers is " << sum << " and it is an odd number " << endl;    //displays this message if the sum is even
        
    }
    
    
    
    
}


//Function checks whether the number is a prime number or not
int check_prime(int num){
    bool is_prime = true;
    
    for(int i = 2; i <= num/2; i++) {   //goes through the numbers in that number
        if (num % i == 0)   //if remainder is 0 at all, it is not a prime number
        {
            is_prime = false;
            break;
        }
    }
    return is_prime;   //no numbers divide into it, meaning it is prime
}


//function checks wheether a prime number is a palindrome or not
bool check_palindrome(int num){
    int n =  0;
    int x = 0;
    int reverse = 0;
    
    n = num;
    
    // this block of code reverses the prime number which its given
    //example: 11
    while (num != 0){
        x = num % 10;   //x = 11 % 10 = 1 || x = 1 % 10 = 1
        reverse = (reverse * 10) + x; // rev = 0*10 + 1 \\ rev = 1*10 + 1 = 11
        num = num / 10l ; // 11 / 10 = 1
    }
    
    // if the reverse and prime number are the same, it means they are palindrome
    if (n == reverse){
        return true;
    }
    else{
        return false;
    }
    
}

//function checks if the input value is odd or not (even)
bool check_odd_sum(int num){
    
    //if the number is able to divide evenly by 2, then it is not an odd number
    if ( num % 2 == 0){
        return true;
    }
    else{
        return false;   //this value needs to be returned for the sum to be odd
    }
}

int main(){
    //calls the above function
    compute_primes();
}
