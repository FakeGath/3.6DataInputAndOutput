// adds the library iostream to the program
#include <iostream>

int main(){

    //Declaration of variables age int and name string.
    int age {29};
    std:: string name;

    // prints message Hello World!
    std ::cout <<"Hello World!" << std:: endl;

    //Prints Age
    std :: cout << "Age : " << age << std :: endl;

    //Prints Errors and Logs
    std :: cerr << "Error message : Something is wrong"<< std :: endl;
    std :: clog << "Log message : Something happend " << std :: endl;
    
}