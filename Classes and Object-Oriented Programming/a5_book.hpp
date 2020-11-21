#ifndef SYDE121_A5_BOOK_HPP
#define SYDE121_A5_BOOK_HPP

#include <iostream>
using namespace std;

//PURPOSE: Models a book instance with corresponding attributes
class Book {
    //store the book title, authors, and date of publication as strings.
	string book_title, book_authors, date_of_publication;
    
public:
    
    
  //default i guess
  Book();
    
	// PURPOSE: Parametric constructor with all attributes specified
	Book(string new_title, string new_authors, string new_dop);

  // PURPOSE: Simple accessor methods for member attributes
	string get_title();
	string get_authors();
	string get_dop();
  



	// PURPOSE: Service function that outputs all attribute values
	void print();
};
#endif 
