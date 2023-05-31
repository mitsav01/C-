/* This program is written to show data types and declaration of variables*/

#include <iostream>

int main()
{
    //Integer data type(stores whole number)
    int Age = 25;
    int year = 1998;

    //Double data type (stores number with decimal)
    double gpa = 1.7;
    double price = 87.25;

    //Boolean data type (shows truthiness of a variable)
    bool student = true;
    bool Male = true;

    //Char data type (stores one Alphabet)
    char initial = 'M';

    //String data type (stores sequence of Characters)

    std::string Name = "Mitesh Savsaviya";
    std::string Nationality = "India";

    std::cout << "My name is "<< Name <<"." <<'\n';
    std::cout << "I am " << Age <<" years old." <<'\n';
    std::cout << "I am from "<< Nationality <<'\n';
    
    return 0;

}
